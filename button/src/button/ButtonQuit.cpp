#include "ButtonQuit.h"

#include <SFML/Graphics.hpp>
ButtonQuit::ButtonQuit() : Button()
{
   mButton = sf::RectangleShape(sf::Vector2f(200, 50));
   mButton.setFillColor(sf::Color::Red);
   mButton.setOrigin(100, 25);
   mButton.setPosition(0, 200);
}

void ButtonQuit::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(mButton, states);
}

sf::FloatRect ButtonQuit::getGlobalBounds() const
{
	return mButton.getGlobalBounds();
}
void ButtonQuit::Action(sf::RenderWindow& window,sf::Color& clearColor, sf::Vector2i mousePos, sf::Vector2f worldMousePos, bool mousePress)
{
	if (mButton.getGlobalBounds().contains(worldMousePos) && mousePress) {
		window.close();
	}
}
