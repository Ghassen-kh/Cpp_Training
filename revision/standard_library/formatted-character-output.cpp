#include<cstdio>
#include<cstring>
using namespace std;

int main (int argc, char ** argv){
    int i=5;
    long int li= 12225143666625L;
    const int bufsize =128;
    char os[bufsize];
    snprintf(os,bufsize,"i is %d, li is %ld\n",i,li);
    puts(os);
    FILE * of = fopen("file.txt","w");
    fprintf(of,"i is %d, li is %ld\n",i,li);
//    fprintf(stderr,"i is %d, li is %ld\n",i,li);

    const char * s="ghassen khalouoaui";
    printf("%s",s);
    fclose(of);
    return 0;


}