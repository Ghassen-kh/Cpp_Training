#include<iostream>
#include "func6.h"

using namespace std;
int main(){
    int a =5;
    printf("the value of i inside func6 function is %d\n",func6(a));
    
    //Branching with goto :
    printf("Before the goto.\n");
    goto target; // it seems that it works only for printf statements ==> search for it 
    printf("after the goto.\n");
    printf("ghassen\n");
    target:
    printf("after the target.\n");

    //Branching with break :
    for (int i=0;i<10;i++){
        if (i==5)
        {
            break;
        }
        
        printf("i = %d\n",i);
    }
    printf("======================\n");
    //Branching with continue :
    for (int i=0;i<10;i++){
        if (i==5)
        {
            continue;//it will skip everything after the continue in the for loop, here it will skip 5
        }
        
        printf("i = %d\n",i);
    }


    return 0;
}
int func6(int x){
    int i=20;
    i+=x;
    return i;
}