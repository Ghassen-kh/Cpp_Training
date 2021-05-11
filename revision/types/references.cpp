#include<iostream>
using namespace std;

int & f(int & x){
    return ++x;
}

int main(int argc,char**argv){
    int i=5;
    int & ir =i;
    ir = 10;
    f(i)=50;
    printf("i is : %d\n",i);    
    return 0;
}