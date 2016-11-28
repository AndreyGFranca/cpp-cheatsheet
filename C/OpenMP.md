# OpenMP

Biblioteca para paralelização de código. Permite acrescentar simultaneidade aos programas escritos em C, C++ e Fortran sobre a base do modelo de execução fork-join. Está disponível em muitas arquiteturas, incluindo as plataforma Unix e Microsoft Windows. É constituída por um conjunto de diretivas de compilador, rotinas de biblioteca, e variáveis de ambiente que influenciam o comportamento do tempo de execução.

Exemplo de paralelização em um laço for:
```
#include <stdio.h>
#include <omp.h>

int main(int argc, char **argv) {
    const int N = 100000;
    int i, a[N];

    #pragma omp parallel for
    for (i = 0; i < N; i++)
        a[i] = 2 * i;

    return 0;
}
```

## Para compilar
Para compilar um código com diretivas da openMP é preciso adcionar a flag `-fopenmp`.
