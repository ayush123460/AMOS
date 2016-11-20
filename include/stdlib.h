#ifndef _STDLIB_H
#define _STDLIB_H 1

#include "cdefs.h"

__attribute__((__noreturn__))
void abort(void) {
	//TODO: add proper kernel panic.
	printf("kernel: panic: abort. \n");
}
