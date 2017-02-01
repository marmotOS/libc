/*
 * string.h
 *
 *
 * Copyright (C) 2017  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */

#ifndef __STRING__
#define __STRING__

#include <stddef.h>

void *memchr(const void *, const int, const size_t);
int   memcmp(const void*, const void*, const size_t);
void *memcpy(void *, const void*, const size_t);
void *memmove(void *, const void *, const size_t);
void *memset(void *, const int, const size_t);

char *strcat(char*, const char*);
char *strchr(const char*, const int);


#endif