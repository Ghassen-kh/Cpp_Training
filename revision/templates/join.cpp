// this function will take any container, and join the elements into a new container with a seperator 
// between each element and return the new container 

#include <iostream>
#include <vector>
using namespace std;

// we have to specify 3 different types, the container type, the return type an the seperator type
// (types can be the same or different)
// 2 of them have default types, the second and third one typename retT = cT / 
// typename sepT = decltype(cT::value_type) ==> it will default to the value type of the container type 

// the function itself return the return type, and it takes 2 arguments, an object of the container type and an object of the seperator type 
template<typename cT, typename retT = cT, typename sepT = decltype(cT::value_type)>
retT joinContainer(const cT & o, const sepT & sep) {
	retT out;
	auto it = o.begin();
	while(it != o.end()) {
		out += *it;
		if(++it != o.end()) out += sep;
	}
	return out;
}

int main( int argc, char ** argv ) {
	string s1("This is a string");
	string s2("This is also a string");
	string s3("Yet another string");

	// join the characters of a string
	cout << joinContainer(s1, ':') << endl;

	// join strings from a vector, returning a string
	vector<string> vs({s1, s2, s3});
	cout << joinContainer<vector<string>, string>(vs, ", ");
	return 0;
}
