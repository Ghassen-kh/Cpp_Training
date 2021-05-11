#include<iostream>
using namespace std;

struct employee
{
    int id; 
    const char * name;
    const char * role;

};

typedef struct employee1
{
    int id1; 
    const char * name1;
    const char * role1;

}empl;

int main (int argc,char** argv){
    struct employee ghassen ={24,"Ghassen","engineer"};
    // you can actually eliminate the struct keyword
    employee wassim ={25,"Wassim","doctor"};
    // you can declare a pointer of type struct employee 
    struct employee *ep = & ghassen;
    empl sami = {26,"Sami","HR manager"};


    printf("%s is the %s and has id : %d\n",ghassen.name, ghassen.role,ghassen.id);
    printf("%s is the %s and has id : %d\n",wassim.name, wassim.role,wassim.id);
    printf("onother output using a struct employee pointer : %s is the %s and has id : %d\n",ep->name, ep->role,ep->id);
    printf("onother output using a typedef struct employee : %s is the %s and has id : %d\n",sami.name1, sami.role1,sami.id1);

   return 0;
}

/* 
The only distinction between struct and class is that is struct the data members default to be puclic
*/