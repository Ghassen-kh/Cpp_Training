
//here we are going to inplement the include guard solution 

#ifndef _INCLUDE_A
#define _INCLUDE_A

struct structA
{
    int member;
};
#endif

/*
#pragma once // it's an other solution, but it's not a standard, when you use it, it may be not supported by some compilers  
struct structA
{
    int member;
};
*/