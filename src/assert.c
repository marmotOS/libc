/*
 * assert.c
 *
 *
 * Copyright (C) 2013-2016  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */
 
#include <assert.h>
// stdio for fputs() and stderr
#include <stdio.h>
// stdlib for abort()
#include <stdlib.h>

void _assert(const char *str)
{
  fputs(str, stderr);
  abort();
}
