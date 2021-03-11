#include <iostream>
using namespace std;
int main(int argc, char ** argv){
    unsigned int x=5;
    unsigned int y=10;
    printf("%08x %08x %08X\n",x,y,x<<8);
    return 0;
}