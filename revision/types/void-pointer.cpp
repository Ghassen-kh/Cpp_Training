#include<iostream>
using namespace std;

void * func(void *);
int main (int argc, char**argv){
    
    printf("this is a void pointer\n");
    const char * cp ="1234";
    int * vp = (int *) func ((void *) cp);
    printf("%08x\n",*vp);
    printf("%d\n",*vp);

    return 0;
}

void * func (void * vp){
    return vp;
}