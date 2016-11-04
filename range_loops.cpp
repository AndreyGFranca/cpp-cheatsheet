#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {

    //Iterando sobre uma sequencia de numeros
    for (int i : {1, 2, 3, 4, 5}){
        std::cout << i << ", ";
    }
    std::cout << std::endl;

    std::vector<int> v = {10, 20, 30, 40, 50};
    for (auto it : v) {
        it *=3;
    }
    std::cout << std::endl;
    for (auto it : v) {
        std::cout << it << ", ";
    }
    std::cout << std::endl;

    for (auto&& it : v) {
        it *=3;
    }
    for (auto it : v) {
        std::cout << it << ", ";
    }
    std::cout << std::endl;

    for (auto&& it : v) {
        std::cout << it << ", ";
    }
    std::cout << std::endl;
    return 0;
}
