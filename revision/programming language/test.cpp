#include<iostream>
#include "func.h"
#include "func6.h"

using namespace std;

/*
enum {max_string = 127}; // enum ?
static char a [max_string+1]=""; // static ?
*/
/*
const int ONE(1);
const int TWO(2);
const int THREE(3);
const int FOUR(4);
*/
/* OR :
 
const int ONE = 1;
const int TWO = 2;
const int THREE = 3;
const int FOUR = 4;  
*/
//=> THIS DOES NOT WORK IN C
/*
#define ONE(1)
#define TWO(2)
#define THREE(3)
#define FOUR(4)
//IT'S NOT WORKING HERE ! SEARCH WHY ==> I have found why ! you have to use const int ONE(1)
*/

//creating functions :
void func(){
    printf("this is a void function\n");
}
int func1(){
    printf("this is an int function\n");
    int i=5;
    return i;
}

//function with parameters 
int func2(int x){
    int i=5;
    x=100;
    i+=x;
    return i;
}
int func3(int x){
    int i=5;
    i+=x;
    return i;
}
//call by reference function
int func4(int *x){
    int i=5;
    *x=100;
    i+=*x;
    return i;
}

int func5(int);//it's more common to the function signature in a header file for example see fun6()

int main (int argc, char **argv){

/*
    func();
    printf("The extern var is : %d\n",var);
*/
/*    //printf 
    printf("Donner la valeur de x:\n");
    int x;
    //scanf 
    scanf("%d",&x);
    printf("La valeur de x est :%d\n",x);

    int y;
    //cout 
    cout<<"Donner la valeur de y : "<<endl;
    //cin 
    cin>>y;
    cout<<"la valeur de y est :"<<y<<endl;
    cout<<"La somme de x et y est :"<<x+y<<endl;
*/

/*
    //fprintf / stdout 
    fprintf(stdout,"Hello, Ghassen!\n"); //stdout is buffered while stderr is not 
    //fprintf / stderr 
    fprintf(stderr,"Hello, Ghassen! (this is an error)\n");
    //the same result by using cout and cerr
    cout<<"Hello, Ghassen !"<<endl;
    cerr<<"Hello, Ghassen! (this is an error)"<<endl;
*/

/*
    //fgets / stdin: 
    printf("Type a string :");
    fgets(a,max_string,stdin); // do not use gets 
    printf("The string is : %s\n",a);
*/

    // usin cin in c++ (it separates on words not on lines)
/*    string inputString;
    cout<<"Type a string";
    cin>>inputString;
    cout<<"InputString is :"<<inputString<<endl; 
    // The problem is that when you type a string like : "This is a string", the output of 
    // cin is : "This" because cin separates in words and not in lines  
*/    
/*
    //The solution is to use getline ==> input streams in c++
    string inputString;
    cout<<"Type a string";
    getline(cin,inputString); // you can use a file instead of cin 
    cout<<"InputString is :"<<inputString<<endl; 
*/

/*
    int x= printf("Hello, Ghassen!\n")*5;
    printf("The number of characters in the string * 5 is :%d",x);
*/
/* 
    for (int i=1; i<=5; ++i){
        register int number = 7 ; 
        printf("number is %d\n",number++);
    }
*/
    int ia[5];
    int * ip=ia;
    *ip=2;
    ++ip;
    *ip=3;
    *(++ip)=4;
//  ia[0]=1;
    int arr[5]={1,2,3,4,5};
    for (int i=0; i < 5;i++){
        printf("La valeur de arr[%d] is %d\n",i,arr[i]);
    }
    printf("The first value of the array is :%d\n",ia[0]);  
    printf("The second value of the array is :%d\n",ia[1]);  
    printf("The third value of the array is :%d\n",ia[2]);  

    char s[]={'g','h','a','s','s','e','n',0};
    char s1[]="ghassen";
    printf("the string s is : %s\n",s);
    printf("the string s1 is : %s\n",s1);
    for (int i=0;s1[i]!=0;i++){
        printf("char is : %c\n",s1[i]);
    }
    printf("================================\n");
    for (int i=0;s[i]!=0;i++){
        printf("char is : %c\n",s[i]);
    }

    printf("================================\n");
    for (char *p=s;*p;++p){
        printf("char printed as pointer is : %c\n",*p);
    }
    //comparing with conditionals
    int a =5;
    int b =0;
    if (a) {
        puts("a is true\n");
    } else if(b) {
        puts("b is true\n");
    } else {
        puts("nothing is true");
    }
    //the tounary conditional operator 
    int c = a? 7:9;
    int x = (a==5) ? (7):(9);
    printf("the value of c according to a is: %d\n",c);
    printf("the value of x according to a is: %d\n",x);

    //using switch statements 
//    int  foo=4;
/*
    switch (foo)
    {
    case 1:
        puts("one");
        break;
    case 2:
        puts("two");
        break;
    case 3:
        puts("three");
        break; // when you don't put a break here for example you get e warning "no break at the end of case" and it will print three and four 
    case 4:
        puts("four");
        break;
    default: 
        puts("default");
        break;
    }
*/
/*
    switch (foo)
    {
    case ONE:
        puts("one");
        break;
    case TWO:
        puts("two");
        break;
    case THREE:
        puts("three");
        break; // when you don't put a break here for example you get e warning "no break at the end of case" and it will print three and four 
    case FOUR:
        puts("four");
        break;
    default: 
        puts("default");
        break;
    }
*/
/*
//WHILE LOOP :
    int y=5;
    while (y>=0)
    {
        printf("y is : %d\n",y);
        --y;
    }
//DO WHILE LOOP:

    int z=5;
    printf("==========================\n");
    do
    {
        printf("z is : %d\n",z);
        --z;
    } while (z>=0);
    int l=5;
    printf("==========================\n");
    while (--l)
    {
        printf("l is : %d\n",l);    
    }
    int k=5;
    printf("==========================\n");
    while (k--)//it will evaluate k first, before it decrements k
    {
        printf("k is : %d\n",k);    
    }
    printf("==========================\n");
    int n=5;
    while (n>=0)
    {
        printf("n is : %d\n",n);
        n--;
    }
*/
//FOR LOOP :
    for (int i = 5; i ; --i)
    {
        printf("i = %d\n",i);
    }
    printf("==========================\n");

    for (int i = 5; i ; i--)
    {
        printf("i = %d\n",i);
    }
    printf("==========================\n");
    for (int i = 0; i<=5 ; i++)
    {
        printf("i = %d\n",i);
    }
    printf("==========================\n");
    for (int i = 0; i<=5 ; ++i)
    {
        printf("i = %d\n",i);
    }

    //iterate throw array using pointer
    int h[]={1,2,3,4,5,0}; 
    for (int *m=h;*m;++m){
        printf("value is :%d\n",*m);
    }
    printf("==========================\n");

    func();
    printf("==========================\n");
    printf("the value of i inside the function func1 is %d\n",func1()); 

    printf("==========================\n");
    int g=25;
    printf("the value of i inside the function func2 is %d\n",func2(g));
    printf("the value of g now is : %d, in fact, it is a call by value \n",g);

    printf("==========================\n");
    printf("the value of i inside the function func3 is %d\n",func3(25));

    printf("==========================\n");
    int t=25;
    printf("the value of i inside the function func4 is %d\n",func4(&t));
    printf("the value of t now is : %d, in fact, it is a call by reference \n",t);
    
    printf("==========================\n");
    int f=30;
    printf("the value of i inside the function func5 is %d\n",func5(f));
    
    printf("==========================\n");
    int d=30;
    printf("the value of i inside the function func6 is %d\n",func6(d));
        
    return 0;
}
//when I declare a function here and use it in the main function, I have to put its decraration before the main 
int func5(int x){
    int i=5;
    i+=x;
    return i;
}
int func6(int x){
    int i=10;
    i+=x;
    return i;
}
/*
// NOTES :
- in c and c++ the ";" is a terminator not a separator, in lack of ";" there is a syntax error 
- its traditional to c++ when include to not have the .h ==> just for example #include<iostream>
- the cout, cin and endl are in the standard namespace ==> can just use : using namespace std;
- when using the printf in c++, its is better to include the equivalent of stdio in c++ which is #include <csdio>
- identifiers in c are tokens used to give recognisable names to variables, functions, labels and defined types 
- identifiers : the basic ISO Latin alphabet (26) + The western arabic numerals (10) + the ASCII underscore character "_"
- identifiers may not begin with a number 
- identifiers may not conflict with reserved keywords 
- In current c++ standard (c++11) reserves 73 words 
- identifiers is case sensitive : Az != aZ
- _private_identifiers 
- __system_use_only

==> The reserved 73 words in c++11 are : alignas/alignof/asm/auto/bool/break/case/catch/char/
char16_t/char32_t/class/const/constexpr/const_cast/continue/decltype/default/delete/double/do/
dynamic_cast/else/enum/explicit/export/extern/false/float/for/friend/goto/if/inline/int/long/
mutable/namespace/new/noexcept/nullptr/operator/private/protected/public/register/reinterpret_cast/
return/short/signed/sizeof/static/static_assert/static_cast/struct/switch/template/this/thread_local/
throw/true/try/typedef/typeid/typename/union/unsigned/using/virtual/void/volatile/wchar_t/while 

- if in i=7; is declared before the main function, it's fine, but when after, we get an error of
  number is undeclared bacause the function is happening before the declaration the same thing when 
  the declaration is after where the variable is used 

==> another example in main function : if(1){int number=7;}printf("number is %d",number); 
==> we get an error 

==> that's called identifiers scope ==> scope is not to be confused with storage class which 
sometimes refers to the storage duration (4 different storage classes are available : auto /
 static extern and register )
- auto is the default storage class for variable defined inside of a bloc ==> auto means that 
it's allocated in a temporarily space (inside that bloc)

- The difference between static and auto : (example : this for loop)
for (int i=1; i<=5; ++i){
    int number = 7 ; 
    printf("number is %d\n",number++);
}
for (int i=1; i<=5; ++i){
    static int number = 7 ; 
    printf("number is %d\n",number++);
}
- register is basically the same as auto but it tend to store the variable in a register of the 
processor rather than storing in temporarilly storage space 
for (int i=1; i<=5; ++i){
    register int number = 7 ; 
    printf("number is %d\n",number++);
}

-search for extern in c++
-try to use pointers in c++

- Arrays and strings :
int ia[5];
ia[0]=1;

-all functions in c are called by value 

*/