#include<iostream>
using namespace std;

class C
{
    int ia;
public:
    void setValue(const int value);
    int getValue () const; // const safe means that I will guarantee that   I will do
    // anything on this function that is not safe to do on a const object, it means that I
    // will not change anything, it is possible to implement 2 sepearte version of this
    // function getValue, one of them is const safe and the other is not
    int getValue ();
};

void C::setValue(const int value){
    ia=value;
}
int C::getValue() const { // const safe means that the function is declared as const safe
// like this with the const keyword 
    cout<<" this is the const getValue() : ";
    return ia;
}
int C::getValue()  {
    cout<<" this is the mutable getValue() : ";
    return ia;
}

class B
{
public:
    int ia;
    string sb;
    int ic; 
};


struct A
{
    int ia;
    int ib;
    int ic;
};


int main (int argc, char ** argv){
    A object1={1,2,3};
    B object2={4,"ghassen",6};
    C object3;
    object3.setValue(5);
    const C object4=object3; // we cannot do this (    const C object4=object3;) because the 
    // getValue function member is not const safe, so in other words when the object is 
    // declared as a const, we connot use function members that are not const safe 

    printf("members of object 1 are: %d,%d and %d\n",object1.ia,object1.ib,object1.ic);
    printf("members of object 2 are: %d,%s and %d\n",object2.ia,object2.sb.c_str(),object2.ic);
    cout<<"members of object 2 are:"<<object2.ia<<","<<object2.sb<<" and "<<object2.ic<<endl;
    cout<<"the value of object3 is :"<<object3.getValue()<<endl;
    cout<<"the value of object4 is :"<<object4.getValue()<<endl;
    object3.setValue(100);
    cout<<"the chenged value of object3 is :"<<object3.getValue()<<endl;
    cout<<"the value of object4 is :"<<object4.getValue()<<endl;
    return 0;

}