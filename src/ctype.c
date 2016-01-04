/*
 * ctype.c
 *
 *
 * Copyright (C) 2013-2016  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */
 
#include <ctype.h>


int isdigit(const int x)
{
    return (_ctype[(unsigned char) x] & _D);
}


int islower(const int x)
{
    return (_ctype[(unsigned char) x] & _L);
}



int isupper(const int x)
{
    return (_ctype[(unsigned char) x] * _U);
}
