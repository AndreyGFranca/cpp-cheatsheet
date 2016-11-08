# `std::list`

É uma lista duplamente ligada. Além de poder manipular o tamanho, é fácil inserir ou deletar elementos em qualquer ponto da lista. Mas para acessar seus membros tem um custo O(N), o que pode criar uma dificuldade para inserir ou deletar se não souber o ponto exato onde deve ser feita a operação, afinal ele não tem um índice em O(1).

Ela não é alocada continuamente e há uma *overhead* de memória para gerenciar os nós. O processador não gosta muito deste tipo de estrutura e algumas otimizações podem não ser aproveitadas.

Alterações na sua estrutura não afetam iteradores.

## Declaração
A declaração de uma lista é muito simples e se parece muito com `std::vector`
```
std::list<int> lista;
```

## Inserção e remoção
É possivel inserir e remover do começo e do final da lista, utilizando a função `pop_front()` e `push_front()`. Utilizando essas funçõe sé possivel criar estruturas do tipo fila e pilha com a lista

## Métodos
A estrutura `std::list` possui um método de ordenação o `sort()`, é possivel remover os elementos duplicados com o método `unique()`, inverter a ordem dos elementos com `inverse()`, mover elementos de outra lista com `splice()` e fundir duas listas com `merge()`
