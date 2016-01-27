/*
 * float.h
 *
 *
 * Copyright (C) 2016  Bryant Moscon - bmoscon@gmail.com
 * 
 * Please see the LICENSE file for the terms and conditions associated with 
 * the use of this software.
 *
 */

#ifndef __FLOAT__
#define __FLOAT__


// Note:
// 1. These can be calculated using unions and type punning, but since
// this implementation targets x86_64 only, the values are hard coded.
// 2. Some precision is lost on the Double and Long Double definitions

#define DBL_DIG          15
#define DBL_EPSILON      2.220446049250313080847263336181640625e-16
#define DBL_MANT_DIG     53
#define DBL_MAX          1.797693134862315708145274237317043567e+308
#define DBL_MAX_10_EXP   308
#define DBL_MAX_EXP      1024
#define DBL_MIN          2.225073858507201383090232717332404064e-308
#define DBL_MIN_10_EXP   (-307)
#define DBL_MIN_EXP      (-1021)

#define FLT_DIG          6   
#define FLT_EPSILON      0.00000011920928955078125
#define FLT_MANT_DIG     24
#define FLT_MAX          340282346638528859811704183484516925440
#define FLT_MAX_10_EXP   38
#define FLT_MAX_EXP      128
#define FLT_MIN          1.175494350822287507968736537222245677e-38
#define FLT_MIN_10_EXP   (-37)
#define FLT_MIN_EXP      (-125)
#define FLT_RADIX        2  
#define FLT_ROUNDS       1

#define LDBL_DIG        18
#define LDBL_EPSILON    1.0842021724855044340074528008699417114e-19        
#define LDBL_MANT_DIG   64
#define LDBL_MAX        1.1897314953572317650212638530309702051e+4932
#define LDBL_MAX_10_EXP 4932     
#define LDBL_MAX_EXP    16384
#define LDBL_MIN        3.3621031431120935062626778173217526025e-4932
#define LDBL_MIN_10_EXP (-4931)
#define LDBL_MIN_EXP    (-16381)



#endif
