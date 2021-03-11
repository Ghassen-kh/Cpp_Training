#include<iostream>
using namespace std;

struct S
{
    int a; 
    int b; 
    int c;
    /* data */
};

int main (int argc, char ** argv){
    struct S s={1,2,3};
    struct S * sp = &s;
    printf(" s has members a : %d, b: %d, c: %d\n",s.a,s.b,s.c);
    printf(" s has members a : %d, b: %d, c: %d\n",sp->a,sp->b,sp->c);

    return 0;
}
