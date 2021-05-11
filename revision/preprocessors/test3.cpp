#include<iostream>
#include "includeA.h"
#include "includeB.h"
using namespace std;

int main(int argc, char **argv){
    printf("I am running perfectly");
    return 0;
}

//error: redefinition of ‘struct structA’ 
// a solution for this error is what we call an include guard 