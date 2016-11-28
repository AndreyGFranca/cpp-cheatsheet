#include <iostream>

// Templates tornam o código mais generico, como a função abaixo.
// Com ela ao invés de ter que declarar várias funções para 
// tipos diferentes podemos utilizar os templates para generalizar
// para todos os tipos de dados.

template<class T> T compara_valores(T a, T b){
    return ((a > b) ? a : b);
}

int main (){
    float a = 200;
    float b = 344;

    int c = 11, d = 12;

    std::cout << compara_valores(a, b);
    std::cout << compara_valores(c, d);
    
    return 0;
}
