#include <sstream>
#include <iostream>

ostringstream o;
o << 123;
string s = o.str();

int main (){

	std::cout << s;
}
