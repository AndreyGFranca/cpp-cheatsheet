# std::map

Um container que armazena um valor e uma chave, um par associativo

```
typedef pair<const Key, T> value_type;
```

### Benefícios do uso do std :: map:   
* Ele armazena apenas chaves exclusivas e que também em ordem ordenada com base em seus critérios de classificação atribuídos
* Como as chaves estão em ordem ordenada, portanto, procurar elemento no mapa através da chave é muito rápido, ou seja, leva tempo logarítmico
* Em `std::map` haverá apenas um valor anexado com cada chave
* `std::map` pode ser usado como arrays associativos
* Ele pode ser implementado usando árvores binárias balanceadas.


### Inserindo dados em um `std::map`:
Podemos inserir dados com a função `insert()`   
```
foo.insert(std::make_pair("goo", 1));
foo.insert(std::make_pair("hoo", 2));
```
Mas também podemos inserir utilizando os colchetes [], por exemplo:
```
foo["goo"] = 1;
```

### Diferença entre o operador [] e a função inserir:
Se formos adcionar um elemento que já existe utilizando o operador ``[]`` ele substituirá o valor, já utilizando a função `insert()` isso não acontecerá e a função retornará falso sem que o elemento seja inserido no `std::map`

Links úteis para referências:  
http://thispointer.com/stdmap-tutorial-part-1-usage-detail-with-examples/
http://www.cplusplus.com/reference/map/map/map/
http://stackoverflow.com/questions/326062/in-stl-maps-is-it-better-to-use-mapinsert-than
