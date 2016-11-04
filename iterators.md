# Iterators

Os iteradores, similares a ponteiros, são usados para apontar para os elementos dos contêineres. Eles armazenam a informação aos tipos específicos de contêineres que eles operam. Isso significa dizer que eles devem ser implementados com o mesmo tipo do contêiner a percorrer.

Para declarar um iterador para um container faça como segue:
```
std::vector<int>::iterator it;
std::list<int>::iterator it;
std::queue<int>::iterator it;
...
```

Para percorrer, basta fazer um laço de repetição, considerando que tenhamos uma estrutura do tipo `vector<int> nums`:
```
for (it = nums.begin(); it != nums.end(); it++) {
    std::cout << *it << std::endl;
}
```
## Iterador com o operador `auto`
Com o operador auto não precisamos dizer qual o tipo do iterador, pois este é o trabalho do auto, advinhar o tipo:
```
for (auto it = nums.begin(); it != nums.end(); ++it){
    std::cout << *it << ", ";
}
```
Links úteis:  
http://stackoverflow.com/questions/14373934/iterator-loop-vs-index-loop
