# `std::array`

É o *array* com semântica igual ao array normal do C, mas é uma forma melhor de usar no C++ quando precisa uma sequência de objetos de forma contígua e de tamanho fixo. Obviamente ele não decai para ponteiro como ocorre com o array de C.

O acesso ocorre em complexidade O(1). Não pode inserir ou deletar, a não ser que crie outro *array*, mas se precisar fazer isso provavelmente é a estrutura errada.

A declaração é a mais simples possivel:
```
std::array<int, 5> a1 = {1,2,3,4,5};
```

A inserção é feita no ato da declaração, não existe uma função `insert` como no `std::vector` porém como no C, podemos fazer coisas do tipo:

```
std::array<int, 5> a1;
for(int i = 0; i < 5; i++){
    a[i] = 2;
}
```
Neste exemplo preenchemos o *array* com o número 2, portanto, apesar de não possuir um método para inserir elementos pode-se facilmente inserir utilizando métodos tradicionais do C.

Para declarar um *array* multidimensional é feito um *array* de *array* como segue:
```
std::array<std::array<int, 3>, 3> a2 = {{{5, 8, 2}, {8, 3, 1}, {5, 3, 9}}};
```
