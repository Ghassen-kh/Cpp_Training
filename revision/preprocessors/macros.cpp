// a common problem with a preprocessor macros is the possibility of unintended results, parameters has been evaluated more than once 
#include<iostream>
#define MAX(a,b) ( (a) > (b) ? (a) : (b) )

using namespace std;


int increment(){
    static int i = 42;
    i+= 5;
    printf("increment returns %d\n",i);
    return i;
}

int main (int argc,char ** argv){
    int x=50;
    printf("max of %d and %d is %d\n",x,increment(),MAX (x,increment()));
    printf("max of %d and %d is %d\n",x,increment(),MAX (x,increment()));

    return 0;
}

/*
The output of this program : 
increment returns 47
increment returns 52
max of 50 and 52 is 50
increment returns 57
increment returns 62
increment returns 67
max of 50 and 67 is 62

which is illogic 
*/