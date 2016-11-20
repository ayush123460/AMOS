# KAMP
An operating system from scratch.
You will require a cross compiler to build this Kernel. Refer http://wiki.osdev.org/GCC_Cross-Compiler to build your own.

To build,
for kernel: i686-elf-gcc -c kernel.c -o kernel.o -std=gnu99 -ffreestanding -O2 -Wall -Wextra

for asm: nasm -felf32 boot.asm boot.o

If any warnings, ignore them.
