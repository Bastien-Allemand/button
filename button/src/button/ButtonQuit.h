#pragma once
#include <SFML/Graphics.hpp>
#include "Button.h"
class ButtonQuit : public Button
{
public:
	sf::RectangleShape mbuttonQuit;
	ButtonQuit();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual sf::FloatRect getGlobalBounds() const override;

};

