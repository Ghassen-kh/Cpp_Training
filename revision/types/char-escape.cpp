#include<iostream>
using namespace std;
int main(int argc,char**argv){
    char string[] = "Ghassen \' \" \\ \x40 \t \u03bc Khalouaoui";
    cout<<string<<endl;
    return 0;
}