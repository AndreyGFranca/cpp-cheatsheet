# `auto`
No C++11 podemos declara variáveis ou mesmo objetos sem declarar seu tipo

```
auto i = 42; // O compilador entende que i é um inteiro
double f();
auto d = f() // d é um double
```

O tipo da variável utilizando `auto` é identificado na sua inicialização portanto  
```
auto i;     //ERRO: i não foi inicializado
```

O operador auto é muito bom para omitir tipos muito grandes como um iterado
```

std::vector<int>::iterator it;

// utilizando o auto
pos = v.begin() // pos é do tipostd::vector<int>::iterator
```
