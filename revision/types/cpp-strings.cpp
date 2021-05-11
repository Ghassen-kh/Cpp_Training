#include<iostream>
using namespace std;
int main(int argc,char**argv){
    string cppString = "Ghassen Khalouaoui";
    cout<<"size of cppString is : "<<sizeof(cppString)<<endl;
    cout<<cppString<<endl;
    for (unsigned int i=0;cppString[i];i++){//here we are testing for a null byte at the end 
        printf("%02d : %c\n",i,cppString[i]);
    }
    printf("==============================\n");
    //another implementation
    for (unsigned int i=0;i<cppString.size();i++){//here we are testing for a null byte at the end 
        printf("%02d : %c\n",i,cppString[i]);
    }
    //another implementation
    printf("==============================\n");
    for (char c : cppString){
        printf("%c\n",c);
    }
        //another implementation : iterating throw the container with an STL iterator 
    printf("==============iterator================\n");
    for (auto it = cppString.begin();it!=cppString.end();++it){
        printf("%c\n",*it);
    }
    return 0;
}