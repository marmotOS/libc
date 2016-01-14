/*
 * test.c
 *
 *
 * Copyright (C) 2013-2016  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */
 
#include <assert.h>
#include <ctype.h>


#include <stdio.h>

int main()
{
    unsigned char i;
    int j;
  
    assert(1 == 1);
  
    for (i = '0'; i <= '9'; ++i) {
        assert(isdigit(i));
        assert(isalnum(i));
        assert(isxdigit(i));
    }

    for (i = 'A'; i <= 'F'; ++i) {
        assert(isxdigit(i));
    }

    for (i = 'a'; i <= 'f'; ++i) {
        assert(isxdigit(i));
    }

    for (i = 'A'; i <= 'Z'; ++i) {
        assert(isalpha(i));
        assert(isalnum(i));
        assert(isupper(i));
    }

    for (i = 'a'; i <= 'z'; ++i) {
        assert(isalpha(i));
        assert(isalnum(i));
        assert(islower(i));
    }

    for (j = 0; j < 256; ++j) {
	if (j < 'A' || j > 'Z') {
	    assert(j == tolower(j));
	} else {
	    assert(tolower(j) == j + ('a' - 'A'));
	}
    }

    

    printf("\n    ---- ALL TESTS PASSED ----\n\n");
  
    return (0);
}
