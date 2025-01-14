#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"
class ButtonChangeColor : public Button
{
public:
	ButtonChangeColor();
	void Action(sf::RenderWindow& window,sf::Color& clearColor, sf::Vector2i mousePos, sf::Vector2f worldMousePos, bool mousePress);
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual sf::FloatRect getGlobalBounds() const override;

};

