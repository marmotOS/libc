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
 
#ifndef __CTYPE__
#define __CTYPE__

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


int isalpha(const int x);
int isalnum(const int x);
int iscntrl(const int x);
int isdigit(const int x);
int isgraph(const int x);
int islower(const int x);
int isprint(const int x);
int ispunct(const int x);
int isspace(const int x);
int isupper(const int x);
int isxdigit(const int x);
int tolower(const int x);
int toupper(const int x);

#endif
