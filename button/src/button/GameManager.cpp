#include "GameManager.h"
#include <SFML/Graphics.hpp>
#include "ButtonChangeColor.h"
#include "ButtonQuit.h"
GameManager::GameManager()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Button");

    sf::View v = window.getView();
    v.setCenter(0, 0);
    window.setView(v);

	ButtonChangeColor buttonChangeColor;
	ButtonQuit buttonQuit;

    sf::Color clearColor = sf::Color::Black;
    while (window.isOpen())
    {
        bool mousePress = false;
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    mousePress = true;
                }
            }
        }

        sf::Vector2i mousePos = sf::Mouse::getPosition(window);
        sf::Vector2f worldMousePos = window.mapPixelToCoords(mousePos);

        
        if (buttonChangeColor.getGlobalBounds().contains(worldMousePos) && mousePress) {
            if (clearColor == sf::Color::Black) {
                clearColor = sf::Color::Cyan;
            }
            else if (clearColor == sf::Color::Cyan) {
                clearColor = sf::Color::Yellow;
            }
            else if (clearColor == sf::Color::Yellow) {
                clearColor = sf::Color::Black;
            }
        }

        if (buttonQuit.getGlobalBounds().contains(worldMousePos) && mousePress) {
            window.close();
        }

        // clear the window with black color
        window.clear(clearColor);

        // draw everything here...
        window.draw(buttonChangeColor);
        window.draw(buttonQuit);

        // end the current frame
        window.display();
    }
}
