#include<iostream>
using namespace std;
int main (int argc, char** argv){
    char c;
    unsigned char c1;
    short int si;
    int i;
    long int li;
    long long int lli;
    printf("All sizes are in byte\n");
    cout<<"size of char c is "<<sizeof(c)<<endl;
    cout<<"size of unsigned char c1 is "<<sizeof(c1)<<endl;
    cout<<"size of short int si is "<<sizeof(si)<<endl;
    cout<<"size of int i is "<<sizeof(i)<<endl;
    cout<<"size of long int li is "<<sizeof(li)<<endl;
    cout<<"size of long long int lli is "<<sizeof(lli)<<endl;

    i=123456;
    printf("i is %d\n",i);
    li=123456L;
    printf("li is %ld\n",li);
    lli=123456ULL; //U means unsigned 
    printf("lli is %lld\n",lli);
    printf("c=127\n");
    c=127;
    printf("c is %d\n",c);
    c++;
    printf("after incrementation, c is : %d\n",c);
    
    printf("c1=127\n");
    c1=127;
    printf("c1 is %d\n",c1);
    c1++;
    printf("after incrementation, c1 is : %d\n",c1);
    c1+=129;
    printf("after adding 129, c1 is : %d\n",c1);

    return 0;
}