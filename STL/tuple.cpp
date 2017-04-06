#include <iostream>
#include <tuple>
#include <stdexcept>

// In C++11
std::tuple<int, int, int, int> foo(int a, int b) { 
	return std::make_tuple(a + b, a - b, a * b, a / b);
}

//In C++17
std::tuple<int, int, int, int> foo2(int a, int b)    {
    return {a + b, a - b, a * b, a / b};
}



int main (){
}
