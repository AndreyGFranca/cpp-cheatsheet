#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {

    // Maneira tradicional de fazer um laço para percorrer
    // os elementos de um container, utilizando iteradores
    // Abaixo alguns exemplos do uso do auto
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Iterador para percorrer os elementos de nums
    std::vector<int>::iterator it;

    // Iterador it percorre o vector printando os respectivos valores
    for (it = nums.begin(); it != nums.end(); it++) {
        std::cout << *it << ", ";
    }
    std::cout << std::endl;

    //Utilizando o operador auto para advinhar o tipo do Iterador
    for (auto it = nums.begin(); it != nums.end(); ++it){
        std::cout << *it << ", ";
    }

    return 0;
}
