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
#include <string.h>

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

    for (j = 0; j < 256; ++j) {
        if (j < 'a' || j > 'z') {
            assert(j == toupper(j));
        } else {
            assert(toupper(j) == j - ('a' - 'A'));
        }
    }

    assert(isalpha(-1) == 0);
    assert(isalnum(-1) == 0);
    assert(iscntrl(-1) == 0);
    assert(isdigit(-1) == 0);
    assert(isgraph(-1) == 0);
    assert(islower(-1) == 0);
    assert(isprint(-1) == 0);
    assert(ispunct(-1) == 0);
    assert(isspace(-1) == 0);
    assert(isupper(-1) == 0);
    assert(isxdigit(-1) == 0);
    assert(tolower(-1) == 0);
    assert(toupper(-1) == 0);


    char array[5] = {'a', 'b', 'c', 'd', 'e'};
    char *ptr = memchr(array, 'b', 5);
    assert(*(ptr+1) == 'c');

    char array2[5] = {'a', 'c', 'b', 'd', 'e'};
    assert(memcmp(array, array2, 5) < 0);
    assert(memcmp(array, array, 5) == 0);
    assert(memcmp(array2, array, 5) > 0);

    memcpy(array, array2, 5);
    assert(memcmp(array, array2, 5) == 0);

    printf("\n    ---- ALL TESTS PASSED ----\n\n");
  
    return (0);
}
