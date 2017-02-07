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

void  *memchr(const void *, const int, const size_t);
int    memcmp(const void*, const void*, const size_t);
void  *memcpy(void *, const void*, const size_t);
void  *memmove(void *, const void *, const size_t);
void  *memset(void *, const int, const size_t);

char  *strcat(char*, const char*);
char  *strchr(const char*, const int);
int    strcmp(const char*, const char*);
int    strcoll(const char*, const char*);
char  *strcpy(char*, const char*);
size_t strcspn(const char*, const char*);
char  *strerror(const int);
size_t strlen(const char*);
char  *strncat(char *, const char*, const size_t);
int    strncmp(const char*, const char*, const size_t);
char  *strncpy(char*, const char*, const size_t);
char  *strpbrk(const char*, const char*);
char  *strrchr(const char*, const int);
size_t strspn(const char*, const char*);
char  *strstr(const char*, const char*);
char  *strtok(char*, const char*);
size_t strxfrm(char*, const char*, const size_t);


#endif