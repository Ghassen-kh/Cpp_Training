#include<iostream>
#include "preproc.h"
using namespace std;
#define ONE (1) //it's not constants rather than simple text replacement 
#define s ("ghassen")
//alternatively 
const int iOne = 1;


int main (int argc,char ** argv){
    printf("i=%d\n",ONE);
    printf("the string here is : %s\n",s);
    printf("the number as const is : %d\n",iOne);
    const int *ip= & iOne;
    printf("the number as const is : %d\n",*ip);
    printf("the string as const is : %s\n",sOne);

    return 0;
}