#include <iostream>
#include "class.hpp"
#include "class.h"
using namespace std;

int main(int argc,char ** argv){
    int i=100;
    Class1 object1;
    object1.setValue(i);
    cout<<"value of object1 is : "<<object1.getValue()<<endl;
    return 0;
}