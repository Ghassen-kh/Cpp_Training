#include <iostream>
using namespace std;
int main (int argc, char ** argv){
    float i=12;
    printf("value is  %f\n",i++);
    printf("value is  %f\n",i++);
    printf("value is  %f\n",i++);
    for (float j=0;j<10;j++)
    {
        printf("j=%f",j);
    }

    char s1[]="string";
    char * c=s1;
    printf("the reference of the pointer: %c\n",*c++);
    printf("the reference of the pointer: %c\n",*c++);
    printf("the reference of the pointer: %c\n",*c++);


    int i1[] = {1,2,3,4,5};
    for (int * ip=i1;*ip;++ip){
    printf("the reference of the pointer: %d\n",*ip);        
    }


    return 0;
}