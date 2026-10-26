/*
 * vga_init.c - program the vga_lcd (AXI) register block from the Shakti core.
 *
 * Equivalent of the XSCT/Vivado script:
 *   mwr 0x40000008 0x5F2F027F   (HTIM)
 *   mwr 0x4000000C 0x012001DF   (VTIM)
 *   mwr 0x40000010 0x031F020C   (HVLEN)
 *   mrd of the three registers
 *   palette (CLUT) 0x800..0xFFC filled with 0x00FF0000
 *   # mwr 0x40000000 0x00003581 (CTRL, left disabled as in the script)
 *
 * Only the base address changes: on Shakti the VGA slave sits at 0x00042000.
 *
 * Build like the hello example: copy software/examples/uart_applns/hello,
 * rename it, and replace its .c file with this one.
 */

#include <stdint.h>
#include "platform.h"
#include "uart.h"

/* ---- VGA register map (offsets from the vga_lcd IP) ---- */
#define VGA_BASE        0x00042000UL

#define VGA_CTRL        0x000   /* control                                  */
#define VGA_STAT        0x004   /* status                                   */
#define VGA_HTIM        0x008   /* horizontal timing                        */
#define VGA_VTIM        0x00C   /* vertical timing                          */
#define VGA_HVLEN       0x010   /* horizontal / vertical total length       */
#define VGA_VBARA       0x014   /* video base address A                     */
#define VGA_VBARB       0x018   /* video base address B                     */
#define VGA_CLUT_START  0x800   /* colour look-up table (palette)           */
#define VGA_CLUT_END    0xFFC

/* ---- values taken from the mwr script (640x480) ---- */
#define HTIM_VAL        0x5F2F027FUL
#define VTIM_VAL        0x012001DFUL
#define HVLEN_VAL       0x031F020CUL
#define CLUT_VAL        0x00FF0000UL   /* 0x00RRGGBB -> red */
#define CTRL_VAL        0x00003981UL

/* Set to 1 to also write CTRL (this line is commented out in the script). */
#define WRITE_CTRL      1

static inline void vga_write(uint32_t off, uint32_t val)
{
    *(volatile uint32_t *)(VGA_BASE + off) = val;
}

static inline uint32_t vga_read(uint32_t off)
{
    return *(volatile uint32_t *)(VGA_BASE + off);
}

/* Print "<label> = 0xXXXXXXXX" without relying on %x / width flags. */
static void print_hex32(const char *label, uint32_t val)
{
    static const char digits[] = "0123456789ABCDEF";
    char buf[11];
    int i;

    buf[0] = '0';
    buf[1] = 'x';
    for (i = 0; i < 8; i++)
        buf[2 + i] = digits[(val >> (28 - 4 * i)) & 0xF];
    buf[10] = '\0';

    printf("%s = %s\n", label, buf);
}

int main(void)
{
    uint32_t off;

    /* mwr 0x...08 / 0C / 10 */
    vga_write(VGA_HTIM,  HTIM_VAL);
    vga_write(VGA_VTIM,  VTIM_VAL);
    vga_write(VGA_HVLEN, HVLEN_VAL);

    /* mrd 0x...08 / 0C / 10 */
    print_hex32("HTIM  ", vga_read(VGA_HTIM));
    print_hex32("VTIM  ", vga_read(VGA_VTIM));
    print_hex32("HVLEN ", vga_read(VGA_HVLEN));

/*    printf("HTIM  = 0x%08x (wrote 0x%08x)\n", (unsigned)vga_read(VGA_HTIM),  (unsigned)HTIM_VAL);
    printf("VTIM  = 0x%08x (wrote 0x%08x)\n", (unsigned)vga_read(VGA_VTIM),  (unsigned)VTIM_VAL);
    printf("HVLEN = 0x%08x (wrote 0x%08x)\n", (unsigned)vga_read(VGA_HVLEN), (unsigned)HVLEN_VAL);
*/
    /* for {set addr 0x800} {$addr <= 0xFFC} {incr addr 4} { mwr ... } */
    for (off = VGA_CLUT_START; off <= VGA_CLUT_END; off += 4)
        vga_write(off, CLUT_VAL);

    /* read back a few palette entries as a sanity check */
/*    printf("CLUT[0]   = 0x%08x\n", (unsigned)vga_read(VGA_CLUT_START));
    printf("CLUT[255] = 0x%08x\n", (unsigned)vga_read(VGA_CLUT_START + 255 * 4));
    printf("CLUT[511] = 0x%08x\n", (unsigned)vga_read(VGA_CLUT_END));
*/
#if WRITE_CTRL
    vga_write(VGA_CTRL, CTRL_VAL);
//    printf("CTRL  = 0x%08x\n", (unsigned)vga_read(VGA_CTRL));
    print_hex32("CTRL ", vga_read(VGA_CTRL));
#endif

//    printf("STAT  = 0x%08x\n", (unsigned)vga_read(VGA_STAT));
    print_hex32("STAT  ", vga_read(VGA_STAT));


    while (1);

    return 0;
}
