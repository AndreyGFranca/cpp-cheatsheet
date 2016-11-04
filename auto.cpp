#include <iostream>
#include <vector>

double soma(double a, double b){
    return a + b;
}

int main(int argc, char const *argv[]) {
    // Nesse caso a é do tipo double
    auto a = soma(16.15, 45.74);

    // b do tipo int
    auto b = 10;

    std::vector<int> v = {1,2,3,4,5,6};

    //n é do tipo std::vector<int>::iterator
    for (auto n : v)
        std::cout << n << std::endl;
    return 0;
}
