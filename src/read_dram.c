#define DRAM_ADDR1 ((volatile unsigned *) 0x0a000000)
#define DRAM_ADDR2 ((volatile unsigned *) 0x0a002000)
#define HEX_BASE   ((volatile unsigned *) 0x1010)

int main() {
    *HEX_BASE = *DRAM_ADDR1; /* DRAM word 0x0000 -> HEX wires */
    *HEX_BASE = *DRAM_ADDR2; /* DRAM word 0x1000 -> HEX wires */
    for (;;) { } /* loop forever */
}
