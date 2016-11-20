#ifndef _STRING_H
#define _STRING_H
#include<stddef.h>
#include "cdefs.h"

size_t strlen(const char* str) {
	size_t len = 0;
	while(str[len])
		len++;
	return len;
}

#endif

