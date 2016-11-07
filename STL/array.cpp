#include <iostream>
#include <array>

int main(int argc, char const *argv[]) {
    std::array<int, 5> a1 = {1,2,3,4,5};
    for (auto& n : a1)
        std::cout << n << ", ";
    std::cout << std::endl;

    std::array<std::array<int, 3>, 3> a2 = {{{5, 8, 2}, {8, 3, 1}, {5, 3, 9}}};

    std::cout << a2[2][2];
    return 0;
}
