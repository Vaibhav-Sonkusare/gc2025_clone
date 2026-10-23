#include <stdint.h>
#include <stdio.h>

/*
 * VGA register test for Shakti Ganga.
 *
 * VGA slave base address: 0x00042000
 *
 * Register offsets:
 *   0x000 : Control register
 *   0x008 : HTIM
 *   0x00C : VTIM
 *   0x010 : HVLEN
 *
 * Framebuffer/test-memory range:
 *   Base + 0x800 through Base + 0xFFC, in 4-byte increments.
 */

#define VGA_BASE_ADDR   0x00042000UL

#define VGA_CTRL_OFFSET 0x000
#define VGA_HTIM_OFFSET 0x008
#define VGA_VTIM_OFFSET 0x00C
#define VGA_HVLEN_OFFSET 0x010

#define VGA_TEST_START  0x800
#define VGA_TEST_END    0xFFC

#define VGA_CTRL_REG  ((volatile uint32_t *)(VGA_BASE_ADDR + VGA_CTRL_OFFSET))
#define VGA_HTIM_REG  ((volatile uint32_t *)(VGA_BASE_ADDR + VGA_HTIM_OFFSET))
#define VGA_VTIM_REG  ((volatile uint32_t *)(VGA_BASE_ADDR + VGA_VTIM_OFFSET))
#define VGA_HVLEN_REG ((volatile uint32_t *)(VGA_BASE_ADDR + VGA_HVLEN_OFFSET))

static inline void vga_write32(uintptr_t address, uint32_t value)
{
    *(volatile uint32_t *)address = value;
}

static inline uint32_t vga_read32(uintptr_t address)
{
    return *(volatile uint32_t *)address;
}

int main(void)
{
    uint32_t value;
    uintptr_t address;

    printf("VGA register test started.\n");

    /* Program timing and resolution registers. */
    vga_write32((uintptr_t)VGA_HTIM_REG, 0x5F2F027F);
    vga_write32((uintptr_t)VGA_VTIM_REG, 0x012001DF);
    vga_write32((uintptr_t)VGA_HVLEN_REG, 0x031F020C);

    /* Read back and verify the register values. */
    value = vga_read32((uintptr_t)VGA_HTIM_REG);
    printf("HTIM  [0x%08lX] = 0x%08lX\n",
           (unsigned long)(VGA_BASE_ADDR + VGA_HTIM_OFFSET),
           (unsigned long)value);

    value = vga_read32((uintptr_t)VGA_VTIM_REG);
    printf("VTIM  [0x%08lX] = 0x%08lX\n",
           (unsigned long)(VGA_BASE_ADDR + VGA_VTIM_OFFSET),
           (unsigned long)value);

    value = vga_read32((uintptr_t)VGA_HVLEN_REG);
    printf("HVLEN [0x%08lX] = 0x%08lX\n",
           (unsigned long)(VGA_BASE_ADDR + VGA_HVLEN_OFFSET),
           (unsigned long)value);

    /*
     * Fill the test-memory/framebuffer region with 0x00FF0000.
     * Equivalent to:
     *   for {set addr 0x40000800} {$addr <= 0x40000FFC} {incr addr 4}
     *       {mwr $addr 0x00FF0000}
     *
     * Here, the provided VGA slave base address is used.
     */
    /*
    printf("Filling VGA memory region...\n");

    for (address = VGA_BASE_ADDR + VGA_TEST_START;
         address <= VGA_BASE_ADDR + VGA_TEST_END;
         address += sizeof(uint32_t)) {
        vga_write32(address, 0x00FF0000);
    }

    printf("VGA memory fill complete.\n");
    */
    /*
     * Optional: enable/start the VGA controller.
     * The original XSDB command was:
     *   mwr 0x40000000 0x00003581
     *
     * Uncomment only after confirming that this control value is
     * correct for your VGA IP and board design.
     */

    // Get some input from user before starting display
    getchar();
    
    vga_write32((uintptr_t)VGA_CTRL_REG, 0x00003581);

    printf("VGA register test completed.\n");

    while (1) {
        /* Keep the bare-metal application running. */
    }

    return 0;
}
