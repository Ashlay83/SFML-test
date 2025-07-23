#include <SFML/Graphics.hpp>

int main()
{   //set the Render window with Resolution title name and window style
    sf::RenderWindow window(sf::VideoMode(1920, 1080),"Window Test",sf::Style::Titlebar|sf::Style::Close);
    //Everything happening in a game is captured by an event
    sf::Event event;
    //Game is utilizing this loop 
    while (window.isOpen()) {
        // Another while loop which is monitoring the users input
        while (window.pollEvent(event)) {
            // switch for taking action against different user input
            switch (event.type)
            {
                // Case for exiting the switch if the user has already pressed the close button on the title bar
            case sf::Event::Closed:
                window.close();
                break;
                // Case of the checking which key the user pressed 
            case sf::Event::KeyPressed:
                if (event.key.code == sf::Keyboard::Escape) {
                    window.close();
                }
                break;
            }

        }
        //Clear screen with a single color 
        window.clear(sf::Color(0, 255, 0, 255));
        //Display or render the things every frame 
        window.display();
    }

    return 0;
}