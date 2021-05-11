/*
#include <iostream>
//#include "func.h"
using namespace std;

void func(){
    printf("this is in the function \n");
}

int main (){
    printf("Hello World! \n");
    func();
    return 0;
}
*/

/*
#include <iostream>
//#include "func.h"
using namespace std;


int main (){
    printf("Hello World! \n");
    func();
    return 0;
}
void func(){
    printf("this is in the function \n");
}

// You will have an error 
*/
/*
#include <iostream>
//#include "func.h"
using namespace std;

void func();

int main (){
    printf("Hello World! \n");
    func();
    return 0;
}
void func(){
    printf("this is in the function \n");
}
// this works fine 
*/
#include <iostream>
#include "func.h"
using namespace std;


int main (){
    printf("Hello World! \n");
    func();
    return 0;
}
void func(){
    printf("this is in the function \n");
}

/*
inside the header file we have the declaration and inside the source file we have the definition      
*/