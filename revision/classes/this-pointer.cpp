#include<iostream>
using namespace std;

class class1
{
    int i;
public:
    void setValue(int value){
        i=value;
    }
    int getValue(){
        return i;
    }
    void lookAtThis(int i);
};

void class1::lookAtThis(int i){
    printf("i is : %d\n",i);
    printf("object i is : %d\n",this->i);
    printf("this is : %p\n",this);
}


int main(int argc,char ** argv){
    int i=100;
    class1 object1;
    object1.setValue(i);
    object1.lookAtThis(9);
    printf("object 1 is : %p\n",&object1);

    cout<<"value is : "<<object1.getValue()<<endl;
    return 0;
}