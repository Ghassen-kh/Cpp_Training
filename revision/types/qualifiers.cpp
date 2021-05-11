#include<iostream>
using namespace std;
int main(int argc, char**argv){
    int i=47;
    i=100;
    printf("the integer i is : %d\n",i);
    const int b=25;
    printf("the integer b is : %d\n",b);
    // b=100; // we get an error 
    for (int j=0;j<=5;j++){
        int k=12;
        k+=j;
        printf("j is : %d k is : %d \n",j,k);
    }
    printf("==============Using the static key word ===============\n");
    for (int j=0;j<=5;j++){
        static int k=12;
        k+=j;
        printf("j is : %d k is : %d \n",j,k);
    }
    return 0;
}

/*
there are 2 types of qualifiers : storage class and type qualifiers     
*/