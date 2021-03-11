/*#include <iostream>
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
}*/

// other example 

#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char ** argv){
    vector<int> i={1,2,3,4,5};
    for(auto it=i.begin();it !=i.end();++it){
        cout<<*it<<endl;
    }
    return 0;
}
