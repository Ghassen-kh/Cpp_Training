#include<iostream>
#include<typeinfo>
#include<vector>

using namespace std;

int func1 (){
    return 100;
}
string func (){
    return "ghassen";
}
int main (int argc, char** argv){
    auto x= func();
    cout<<x<<endl;
    cout<<typeid(x).name()<<endl;
    
    string y = func();
    cout<<y<<endl;
    cout<<typeid(y).name()<<endl;

    auto z = func1();
    cout<<z<<endl;
    cout<<typeid(z).name()<<endl;
    
    int k = func1();
    cout<<k<<endl;
    cout<<typeid(k).name()<<endl;

    vector<int> i ={1,2,3,4,5};
    for (vector<int>::iterator it =i.begin();it!=i.end();++it){
        cout<<*it<<endl;
    }
    printf("================another method using auto================\n");
    for (auto it =i.begin();it!=i.end();++it){
        cout<<*it<<endl;
    }

    return 0;

}