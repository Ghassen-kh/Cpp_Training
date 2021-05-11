#include <iostream>
using namespace std;
namespace BWString {
    const std::string bws ="This is BWString :: string";
    class string 
    {
    private:
        std::string s;
    public:
        string (void): s(bws){};
        string (const std::string & _s):s(bws){};
        operator std::string & ( void ) { return s;};
    };
};

BWString::string s1("This is a string");
string s2("This is a string");

int main (int argc, char ** argv){
    string s=s1;
    cout<<s<<endl;
    string s3=s2;
    cout<<s3<<endl;
    return 0;
}