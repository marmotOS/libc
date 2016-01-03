/*
 * ctype.h
 *
 *
 * Copyright (C) 2013-2016  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */
 
#ifndef _CTYPE_H
#define _CTYPE_H

/* Use 256 entry, 8 bit per entry lookup table to identify properties of each
 * possible byte
 *
 * Makes use of the following bitwise macros:
 */

// Decimal Digit
#define _D 0x1

// Decimal AND Hex digits
#define _H 0x2

// Lowercase
#define _L 0x4

// Uppercase
#define _U 0x8




static unsigned char _ctype[256] = {
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  _D,_D,_D,_D,_D,_D,_D,_D,_D,_D,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
  0,_L,_L,_L,_L,_L,_L,_L,_L,_L,_L,_L,_L,_L,_L,_L,
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



int isdigit(const int x);
int islower(const int x);



#endif
