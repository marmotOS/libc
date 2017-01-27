/*
 * string.c
 *
 *
 * Copyright (C) 2017  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */

#include <string.h>


void *memchr(const void *str, const int c, const size_t len)
{
    const unsigned char *ptr = str;
    const unsigned char ch = c;
    for (unsigned int i = 0; i < len; ++i, ++ptr) {
        if (*ptr == ch) {
            return (unsigned char *)(ptr);
        }
    }
    return (NULL);
}