#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"
class ButtonChangeColor : public Button
{
public:
	ButtonChangeColor();
	sf::RectangleShape mbuttonChangeColor;
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual sf::FloatRect getGlobalBounds() const override;

};

