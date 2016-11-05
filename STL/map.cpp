#include <iostream>
#include <map>
#include <string>

int main(int argc, char const *argv[]) {

    //uma estrutura map para guardar um nome e um id
    std::map<std::string, int> info;

    info["Andrey"] = 1;
    info["Joao"] = 2;
    info["Judas"] = 3;

    std::map<std::string, int>::iterator it = info.begin();

    while(it != info.end())
    {
        std::cout << it->first << " :: " << it->second << std::endl;
        it++;
    }
    return 0;
}
