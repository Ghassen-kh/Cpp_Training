#include <cstdio>
void * func (void *);
int main(int argc, char ** argv){
    printf("this is void pointer.c\n");
    char * cp="1235";
    int * vp= func(cp);
    printf("%08x\n",* vp);
    return 0;

}
void * func (void * vp){
    return vp; 
}