#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {

    std::cout << "O básico do vector: \n";
    // Estrutura vector, funciona como fila, pilha, lista
    // push_back insere um elemento no final da lista
    std::vector<int> v = {-1, -2, -3};

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    for (auto n : v){
        std::cout << n << " ";
    }

    std::cout << std::endl;
    std::cout << "Par ordenado\n";
    // Estrutura vector com pares, com isso nós podemos criar um estrutura de
    // par ordenado. com o std::pair.
    std::vector< std::pair<int, int> > mat;


    mat.push_back(std::pair<int, int> (10, 20));
    mat.push_back(std::pair<int, int> (30, 40));
    mat.push_back(std::pair<int, int> (50, 60));

    for(int i = 0; i < mat.size(); i ++){
        std::cout << mat[i].first << ", " << mat[i].second << std::endl;
    }

    return 0;
}
