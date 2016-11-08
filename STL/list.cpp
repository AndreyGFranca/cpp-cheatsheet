#include <iostream>
#include <list>

int main(int argc, char const *argv[]) {

    std::list<int> l1;

    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    for(auto n : l1)
        std::cout << n << ", ";

    // Saída:
    // 3, 2, 1,

    std::cout  << std::endl;

    std::list<int> l2;
    l2.push_back(1);
    l2.push_back(3);
    l2.push_back(10);
    l2.push_back(11);
    l2.push_back(7);
    l2.push_back(6);
    l2.push_back(2);
    l2.push_back(2);
    for(auto n : l2)
        std::cout << n << ", ";

    // Saída:
    // 1, 3, 10, 11, 7, 6, 2, 2
    std::cout << std::endl;
    l2.sort();
    l2.unique();
    for(auto n : l2)
        std::cout << n << ", ";

    // Saída:
    // 1, 2, 3, 6, 7, 10, 11,
    return 0;
}
