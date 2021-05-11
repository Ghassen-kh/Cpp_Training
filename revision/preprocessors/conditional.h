/*
Exploring conditional compilation : 
#if 
#else 
#ifdef / other version : #if defined (MACRO) 
#ifndef
#elif 
#endif 

*/
#ifndef CONDITIONAL_H
#define CONDITIONAL_H

#ifdef FOO // instead you can use if defined : #if defined (FOO)

#define NUMBER 47
#else
#define NUMBER 2

#endif

#endif