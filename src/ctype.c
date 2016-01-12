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


unsigned char _ctype[256] = {
  0,_B,_B,_B,_B,_B,_B,_B,_B,_B,_C,_C,_C,_C,_C,_B,
  _B,_B,_B,_B,_B,_B,_B,_B,_B,_B,_B,_B,_B,_B,_B,_B,
  _S,_P,_P,_P,_P,_P,_P,_P,_P,_P,_P,_P,_P,_P,_P,_P,
  _D,_D,_D,_D,_D,_D,_D,_D,_D,_D,0,0,0,0,0,0,
  0,_XU,_XU,_XU,_XU,_XU,_XU,_U,_U,_U,_U,_U,_U,_U,_U,_U,
  _U,_U,_U,_U,_U,_U,_U,_U,_U,_U,_U,0,0,0,0,0,
  0,_XL,_XL,_XL,_XL,_XL,_XL,_L,_L,_L,_L,_L,_L,_L,_L,_L,
  _L,_L,_L,_L,_L,_L,_L,_L,_L,_L,_L,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
};



int isalpha(const int x)
{
    return (_ctype[(unsigned char) x] & (_U | _L));
}


int isalnum(const int x)
{
    return (_ctype[(unsigned char) x] & (_D | _U | _L));
}


int iscntrl(const int x)
{
    return (_ctype[(unsigned char) x] & (_B | _C));
}


int isdigit(const int x)
{
    return (_ctype[(unsigned char) x] & _D);
}


int isgraph(const int x)
{
    return (_ctype[(unsigned char) x] & (_D | _L | _U | _P));
}


int islower(const int x)
{
    return (_ctype[(unsigned char) x] & _L);
}


int isprint(const int x)
{
    return (_ctype[(unsigned char) x] & (_D | _L | _U | _P | _S));
}


int ispunct(const int x)
{
    return (_ctype[(unsigned char) x] & _P);
}


int isspace(const int x)
{
    return (_ctype[(unsigned char) x] & (_S | _C));
}


int isupper(const int x)
{
    return (_ctype[(unsigned char) x] & _U);
}


int isxdigit(const int x)
{
    return (_ctype[(unsigned char) x] & (_X | _D));
}
