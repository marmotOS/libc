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
 
#ifndef _CTYPE_H_
#define _CTYPE_H_

/* Use 256 entry, 8 bit per entry lookup table to identify properties of each
 * possible byte
 *
 * Makes use of the following bitwise macros:
 */

// Decimal Digit
#define _D 0x1

// Lowercase
#define _L 0x2

// Uppercase
#define _U 0x4

// Blank
#define _B 0x8

// Control
#define _C 0x10

// Space
#define _S 0x20

// Punctuation
#define _P 0x30

// Hex
#define _X 0x40

// Hex Lower
#define _XL (_L | _X)

// Hex Upper
#define _XU (_U | _X)


static unsigned char _ctype[256] = {
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



int isdigit(const int x);
int islower(const int x);



#endif
