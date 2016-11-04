# Range-based `for` loops

No C++11 foi introduzido um novo formato para o laço de repetição `for`, que itera sobre uma distancia de números por exemplo de 1 até 10, sobre um array, ou uma coleção. É conhecido em outras linguagens de programação como foreach loop. A syntax geral para declaração de um range-based loop é como segue:

```
for (declaracao : colecao){
    código...
}
```
Onde declaração é onde será declarado o iterador do laço, e a coleção é justamente sobre o que o laço deve iterar, veja por exemplo:

```
for (int i : {1, 2, 3, 4, 5, 6, 7, 8, 9}){
    std::cout << i << std::endl;
}
```

Tomemos outro exemplo, multiplicar todos os elementos `elem` de um vector `vec` por por 5:

```
std::vector<int> vec;
...
for (auto& elem : vec){
    elem *= 5;
}

```

### Diferença entre auto e auto&
A principal diferença está em que com o auto acessamos o elemento por valor, já com auto& acessamos por referência.
