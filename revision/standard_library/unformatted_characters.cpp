#include<iostream>
#include<cstdio>
using namespace std;
int main (int argc, char ** argv){
/*
    //puts is simple and it generates a new line automatically 
    puts("Ghassen khalouaoui");
    puts("Ghassen khalouaoui");
    puts("Ghassen khalouaoui");
    
    //fputs does not generate a new line automatically 
    fputs("Ghassen khalouaoui",stdout);
    fputs("Ghassen khalouaoui",stdout);
    fputs("Ghassen khalouaoui",stdout);

    //when writing to a file it's a good idea to use fputs 
    FILE * out = fopen("file1.txt","w");
    fputs("Ghassen Khalouaoui\n",out);
    fclose(out);
*/
    char s[128];
    FILE * in = fopen("file1.txt","r");
    fgets(s,128,in);
    fclose(in);
    fputs("s = ", stdout);
    fputs(s,stdout);

    return 0;


}