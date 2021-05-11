#include<iostream>
using namespace std;
int main (int argc, char ** argv){
    float f;
    double df;
    long double ldf;

    cout<<"size of float f is :"<<sizeof(f)<<endl;
    cout<<"size of double df is :"<<sizeof(df)<<endl;
    cout<<"size of long double is :"<<sizeof(ldf)<<endl;

    f=0.1;
    f+=0.1+0.1;
    cout<<"f is :"<<f<<endl;
    if (f==0.3) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    return 0;
}