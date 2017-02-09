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
    for (size_t i = 0; i < len; ++i, ++ptr) {
        if (*ptr == ch) {
            return (unsigned char *)(ptr);
        }
    }
    return (NULL);
}


int memcmp(const void *a, const void *b, size_t len)
{
    const unsigned char *ptr = a;
    const unsigned char *ptr2 = b;
    for (size_t i = 0; i < len; ++i, ++ptr, ++ptr2) {
        if (*ptr != *ptr2) {
            return (*ptr - *ptr2);
        }
    }
    return (0);
}


void *memcpy(void *to, const void *from, const size_t len)
{
    const unsigned char *ptr = from;
    unsigned char *dest = to;
    for (size_t i = 0; i < len; ++i, ++ptr, ++dest) {
        *dest = *ptr;
    }

    return (to);
}


void *memmove(void *to, const void *from, const size_t len)
{
    const unsigned char *ptr = from;
    unsigned char *dest = to;

    if (to == from) {
        return (dest);
    }

    if ((ptr < dest) && (dest < (ptr + len))) {
        /* address ranges overlap like so:
        * <---- source --->
        *        <---- dest ---->
        * so need to copy in reverse
        */
        ptr += len;
        dest += len;
        for (size_t i = 0; i < len; ++i, --ptr, --dest) {
            *dest = *ptr;
        }
    } else {
        for (size_t i = 0; i < len; ++i, ++ptr, ++dest) {
            *dest = *ptr;
        }
    }

    return (to);
}


void *memset(void *ptr, const int val, const size_t len)
{
    const unsigned char c = val;
    unsigned char *dest = ptr;

    for (size_t i = 0; i < len; ++i, ++dest) {
        *dest = c;
    }

    return (ptr);
}


char *strcat(char *s1, const char* s2)
{
    char *ptr = s1;
    const char *ptr2 = s2;
     
    while (*ptr) {
        ++ptr;
    }

    while (*ptr2) {
        *ptr = *ptr2;
        ++ptr;
        ++ptr2;
    }

    *ptr = NULL;

    return (s1);
}


char *strchr(const char* str, const int c)
{
    const char ch = c;
    const char *ptr = str;

    while(*ptr) {
        if (*ptr == ch) {
            return ((char *)ptr);
        }
        ++ptr;
    }
    return (NULL);
}


int strcmp(const char* s1, const char* s2)
{
    while (*s1 == *s2) {
        if (*s1 == NULL) {
            return (0);
        }
        ++s1;
        ++s2;
    }
    
    return ((*s1 < *s2) ? -1 : 1);          
}


char *strcpy(char *dest, const char* source)
{
    char *ptr = dest;

    while (*source) {
        *ptr++ = *source++;
    }
    *ptr = NULL;

    return (dest);
}


size_t strcspn(const char* str1, const char *str2)
{
    const char *match = str1;

    while (match) {
        for (size_t i = 0; str2[i]; ++i) {
            if (*match == str2[i]) {
                return (i);
            }
        }
        ++match;
    }
    
    return (NULL);
}


size_t strlen(const char* str)
{
    size_t i;
    for (i = 0; str[i]; ++i) ;

    return (i);
}