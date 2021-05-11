#include<iostream>
using namespace std;

class class1
{
    int i;
public:
    void seValue(int value){
        i=value;
    }
    int getValue(){
        return i;
    }
};

int main(int argc, char ** argv){
    int i=100;
    class1 object;
    cout<<"the value of object1 is : "<<object.getValue()<<endl;  // the default constructor 
    // here, it initializes the value to 0 ==> that's the implecit constructor
    object.seValue(i);
    printf("the value of object1 is : %d\n",object.getValue());  
    return 0;
}