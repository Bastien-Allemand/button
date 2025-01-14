#include "ButtonQuit.h"
#include <SFML/Graphics.hpp>
ButtonQuit::ButtonQuit() : Button()
{
   mbuttonQuit = sf::RectangleShape(sf::Vector2f(200, 50));
   mbuttonQuit.setFillColor(sf::Color::Red);
   mbuttonQuit.setOrigin(100, 25);
   mbuttonQuit.setPosition(0, 200);
}

void ButtonQuit::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(mbuttonQuit, states);
}

sf::FloatRect ButtonQuit::getGlobalBounds() const
{
	return mbuttonQuit.getGlobalBounds();
}
