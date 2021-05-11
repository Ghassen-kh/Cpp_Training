#include<iostream>
using namespace std;
int main (int argc, char ** argv){
    char cstring[]="ghassen";
    cout<<"length of the array of chars is : "<<sizeof(cstring)<<endl;
    cout<<cstring<<endl;
    for (unsigned int i=0;cstring[i];i++){
        printf("%02d : %c\n",i,cstring[i]);
    }
    return 0;
}