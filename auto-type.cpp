#include <iostream>
#include <typeinfo>
using namespace std;
int func(){
    return 42;
}
int main(int argc, char ** argv){
    auto x=func();
    cout<<x<<endl;
    cout<<typeid(x).name()<<endl;
    return 0;
}

// other example 
/*
#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char** argv){
    vector<int> v = {1,2,3,4,5,6,7};
    for (auto it=v.begin(); it!=v.end();++it){
        cout<<*it<<endl;
    }
    return 0;
}
*/