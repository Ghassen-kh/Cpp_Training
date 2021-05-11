#include<stdio.h>

int main (int argc, char ** argv){
    int i=5;
    long int li= 12225143666625L;
    char *  s = "ghassen khalouaoui";
    fprintf(stdout,"i is %d, li is %ld, s is %s\n",i,li,s);
    fprintf(stderr,"i is %d, li is %ld, s is %s\n",i,li,s);
    printf("%s",s);  

    return 0;


}