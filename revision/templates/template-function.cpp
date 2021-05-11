// template-function.cpp by Bill Weinman <http://bw.org/>
#include <iostream>
using namespace std;

template <typename Type> Type maxof ( Type a, Type b ) {
	return ( a > b ? a : b );
}

int main( int argc, char ** argv ) {
	cout << maxof( 7, 9 ) << endl;
	cout << maxof<string>( "aaaa", "baaa" ) << endl; // here we added <string> to tell the compiler 
	//about a type that supports the > operator  

	return 0;
}

// ==> this simple template is both type ignostic (it will work for any type that has support for the >
// operator ) and type safe (the compiler will generate a specialization of the function for that given 
// type )
