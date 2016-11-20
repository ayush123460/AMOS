#include "include/stdio.h"

void kernel_main(void) {
	terminal_initialize();
	terminal_writestring("Hello world! \n");
	printf("Hello world! \n");
}
