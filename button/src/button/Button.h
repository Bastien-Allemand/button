#pragma once
#include <SFML/Graphics.hpp>
class Button : public sf::Drawable, public sf::Transformable
{

public:
	Button();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	virtual sf::FloatRect getGlobalBounds() const;
};

