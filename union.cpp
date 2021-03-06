// a union is a data structure that allows you to use the same memory space for different  types 

#include <iostream>
#include <stdint.h>

using namespace std;
union ipv4
{
    struct 
    {
        uint8_t a;
        uint8_t b;
        uint8_t c;
        uint8_t d;
        /* data */
    }bytes;
    uint32_t int32;
    
    /* data */
};

int main (int argc, char ** argv){
    union ipv4 addr;
    addr.bytes = {192,168,0,96};
    printf("%d.%d.%d.%d - (%08x)\n",addr.bytes.a,addr.bytes.b,addr.bytes.c,addr.bytes.d,addr.int32);
    return 0;
}
