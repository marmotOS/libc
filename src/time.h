/*
 * time.h
 *
 *
 * Copyright (C) 2016  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */

#ifndef __TIME__
#define __TIME__

/* stddef for size_t and NULL */
#include <stddef.h>


#define CLOCKS_PER_SEC       1000000

typedef unsigned long int time_t;
typedef unsigned long int clock_t;

typedef tm {
    int tm_sec;   /*  seconds after the minute --- [0, 60] */
    int tm_min;   /*  minutes after the hour --- [0, 59] */
    int tm_hour;  /*  hours since midnight --- [0, 23] */
    int tm_mday;  /*  day of the month --- [1, 31] */
    int tm_mon;   /*  months since January --- [0, 11] */
    int tm_year;  /*  years since 1900 */
    int tm_wday;  /*  days since Sunday --- [0, 6] */
    int tm_yday;  /*  days since January 1 --- [0, 365] */
    int tm_isdst; /*  Daylight Saving Time flag */
} tm;


clock_t clock();
double difftime(time_t, time_t);
time_t mktime(struct tm*);
time_t time(time_t*);
char *asctime(const struct tm*);
char *ctime(const time_t*);
struct tm *gmtime(const time_t*);
struct tm *localtime(const time_t*);
size_t strftime(char*, size_t, const char*, const struct tm*);


#endif

