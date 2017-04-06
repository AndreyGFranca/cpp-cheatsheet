//------------------------------------------------------------------
// test1.cpp
// This file contains an example of how to use the inhertiance of
// a class Player from the class Drawable, with this, we can draw
// an class to the window, calling the function window.draw()
// Qua Abr 5 2017
// Andrey França
//-------------------------------------------------------------------


#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace std;


class Player : public sf::Drawable
{
public:
    Player();
    void setX(float x){
        x_ = x;
        sprite_.setPosition(x_, y_); 
    }
    int getX(){
        return x_;
    }
    void setY(int y){
        y_ = y; 
        sprite_.setPosition(x_, y_); 
    }
    int getY(){
        return y_;
    }

private:
    sf::CircleShape sprite_;
    int x_, y_;

    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override
    {
        target.draw(sprite_, states);
    }  
};

Player::Player()
{
    x_ = 10; y_ = 10;
    sprite_.setRadius(10);
    sprite_.setOutlineColor(sf::Color::Red);
    sprite_.setOutlineThickness(5);
    sprite_.setPosition(x_, y_);
}


int main()
{   
    Player player;
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            else if(event.type == sf::Event::KeyPressed)
            {
                if(event.key.code == sf::Keyboard::W){
                    player.setY(player.getY() - 10);
                }
                else if(event.key.code == sf::Keyboard::S){
                    player.setY(player.getY() + 10);
                }
                else if(event.key.code == sf::Keyboard::D){
                    player.setX(player.getX() + 10);
                }
                else if(event.key.code == sf::Keyboard::A){
                    player.setX(player.getX() - 10);
                }
            }
        }
        window.clear();
        window.draw(player);
        window.display();
    }

    return 0;
}   