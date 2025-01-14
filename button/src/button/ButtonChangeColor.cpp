#include "ButtonChangeColor.h"
#include <SFML/Graphics.hpp>



ButtonChangeColor::ButtonChangeColor() : Button()
{
    mButton = sf::RectangleShape(sf::Vector2f(200, 50));
    mButton.setFillColor(sf::Color::White);
    mButton.setOrigin(100, 25);
    mButton.setPosition(0, 0);

}

void ButtonChangeColor::Action(sf::RenderWindow& window,sf::Color& clearColor,sf::Vector2i mousePos,sf::Vector2f worldMousePos,bool mousePress)
{
    if (mButton.getGlobalBounds().contains(worldMousePos) && mousePress)
    {
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
}

void ButtonChangeColor::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    target.draw(mButton, states);
}

sf::FloatRect ButtonChangeColor::getGlobalBounds() const
{
	return mButton.getGlobalBounds();
}
