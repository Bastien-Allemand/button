#include "Mouse.h"
#include <SFML/Graphics.hpp>
#include "ButtonChangeColor.h"
#include "ButtonQuit.h"
Mouse::Mouse()
{
}

void Mouse::Update(sf::RenderWindow& window, Button& button,  bool mousePress, sf::Color& clearColor)
{
    sf::Vector2i mousePos = sf::Mouse::getPosition(window);
    sf::Vector2f worldMousePos = window.mapPixelToCoords(mousePos);
	button.Action(window,clearColor, mousePos, worldMousePos, mousePress);
   

    
}
