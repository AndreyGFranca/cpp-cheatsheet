//------------------------------------------
// This is a simples SFML hello world
// Qui Abr 6 00:51
// Andrey Franca
//------------------------------------------

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;

int main ()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Test3");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.display();
    }

    return 0;

}