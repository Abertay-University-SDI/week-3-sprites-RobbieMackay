#include "Background.h"

Background::Background()
{
	bg.loadFromFile("gfx/Level1_1.png");

	setTexture(&bg);
	setSize(sf::Vector2f(11038, 657));
}

Background::~Background()
{

}

void Background::setWindow(sf::RenderWindow* wnd)
{
	window = wnd;
}

void Background::handleInput(float dt)
{
	sf::View v = window->getView();

	if (input->isKeyDown(sf::Keyboard::Space))
	{
		v.setCenter(v.getCenter().x + 0.1, v.getCenter().y);
	}

	window->setView(v);
}