#include<iostream>
#define FOO
#include "conditional.h"

//#define FOO // it doesn't change anything because FOO is defined after the include of conditional.h

//MACROS:
#define MACRO1(a,b) (a*b)
#define MACRO2(a,b) ( a>b ? a:b) 
#define MACRO3(a,b) ( (a)>(b) ? (a):(b)) // it's a best practice to put everything in ()

using namespace std;
int main (int argc, char **argv){
    printf("the NUMBER is : %d\n",NUMBER);
    int x = 5;
    int y =7;
    printf("x = %d , y = %d, and the result = %d \n",x,y,MACRO1(x,y));
    printf("x = %d , y = %d, and the result = %d \n",x,y,MACRO2(x*y,y));
    printf("x = %d , y = %d, and the result = %d \n",x,y,MACRO3(x*y,y));
    return 0;
}