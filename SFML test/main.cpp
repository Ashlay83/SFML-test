#include <SFML/Graphics.hpp>

int main()
{   //set the Render window with Resolution title name and window style
    sf::RenderWindow window(sf::VideoMode(1920, 1080),"Window Test",sf::Style::Titlebar|sf::Style::Close);
    //Everything happening in a game is captured by an event
    sf::Event event;
    //
    while (window.isOpen()) {
        
    }

    return 0;
}