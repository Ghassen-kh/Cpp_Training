#include <iostream>
using namespace std; 

int f(int i){
    cout<<"this is f()"<<endl;
    return i;
}

int main(int argc, char ** argv){
    int i;
    int (*pFunc)(int);
    pFunc=&f; 
    i=(*pFunc)(50);
    int j=f(47);
    printf("i is %d\n",i);
    printf("j is %d\n",j);

    return 0;
}