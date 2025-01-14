#pragma once
#include <SFML/Graphics.hpp>
#include "ButtonChangeColor.h"
#include "ButtonQuit.h"
class Mouse
{
public:
	Mouse();
	void Update(sf::RenderWindow& window,Button& button,bool mousePress, sf::Color& clearColor);
};

