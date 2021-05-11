#include<iostream>
using namespace std;

struct preferences 
{
    bool likesMusic :1;
    bool hasHair :1;
    bool hasInternet :1;
    bool hasDinosaur :1;
    unsigned int numberOfChildren :4; // this means that there are a max of 15 children
};


int main (int argc,char**argv){
    struct preferences homer;
    homer.likesMusic=true;
    homer.hasHair=true;
    homer.hasDinosaur=false;
    homer.hasInternet=true;
    homer.numberOfChildren=15; 

    if(homer.likesMusic) printf("homer likes music !\n");
    if(homer.hasHair) printf("homer has hair  !\n");
    if(homer.hasDinosaur) printf("homer has dinosaur !\n");
    if(homer.hasInternet) printf("homer has internet !\n");

    printf("homer has %d children !\n",homer.numberOfChildren);

    return 0;
}