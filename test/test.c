/*
 * test.c
 *
 *
 * Copyright (C) 2013-2015  Bryant Moscon - bmoscon@gmail.com
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
  char i;
  
  assert(1 == 1);
  
  for (i = '0'; i <= '9'; ++i) {
    assert(isdigit(i));
  }

  printf("\n    ---- ALL TESTS PASSED ----\n\n");
  
  return (0);
}
