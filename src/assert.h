/*
 * assert.h
 *
 *
 * Copyright (C) 2013-2016  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */
 
#ifndef _ASSERT_H_
#define _ASSERT_H_


#undef assert

#ifdef NDEBUG
#define assert(x) ((void) 0)
#else

// double expansion pre-processor trick to get __LINE__ converted into
// a string since the preprocessor macro expands to an integer
#define _STR(x) __STR(x)
#define __STR(x) #x

void _assert(const char *);

#define assert(x) ((x) ? ((void) 0) : _assert(__FILE__ ":" _STR(__LINE__) ": Assertion '" \
					      #x "' failed.\n"))


#endif
#endif
