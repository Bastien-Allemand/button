#include "ButtonChangeColor.h"
#include <SFML/Graphics.hpp>



ButtonChangeColor::ButtonChangeColor() : Button()
{
    mbuttonChangeColor = sf::RectangleShape(sf::Vector2f(200, 50));
    mbuttonChangeColor.setFillColor(sf::Color::White);
    mbuttonChangeColor.setOrigin(100, 25);
    mbuttonChangeColor.setPosition(0, 0);

}

void ButtonChangeColor::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(mbuttonChangeColor, states);
}

sf::FloatRect ButtonChangeColor::getGlobalBounds() const
{
	return mbuttonChangeColor.getGlobalBounds();
}
