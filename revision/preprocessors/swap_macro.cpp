#include<iostream>
using namespace std;
//this is a line continuation example using a backslash in macro  
#define SWAP(a,b) do {\
                        a^=b;\
                        b^=a;\
                        a^=b;\
                     }while (0)

int main (int argc, char ** argv){
    int a =7;
    int b =9;
    printf("a is %d and b is %d \n",a,b);
    SWAP(a,b);
    printf("a is %d and b is %d \n",a,b);
    return 0;
}

