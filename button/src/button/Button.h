#pragma once
#include <SFML/Graphics.hpp>
class Button : public sf::Drawable, public sf::Transformable
{

public:
	sf::RectangleShape mButton;
	Button();
	virtual void Action(sf::RenderWindow& window,sf::Color& clearColor, sf::Vector2i mousePos, sf::Vector2f worldMousePos, bool mousePress) = 0;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual sf::FloatRect getGlobalBounds() const;
};

