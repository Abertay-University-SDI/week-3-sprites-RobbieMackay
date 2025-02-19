#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);

	player.setInput(in);
	background.setInput(in);
	cursor.setInput(in);

	enemy.setWindow(hwnd);
	background.setWindow(hwnd);

	window->setMouseCursorVisible(false);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	player.handleInput(dt);
	background.handleInput(dt);
	cursor.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{
	player.update(dt);
	enemy.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(background);
	window->draw(player);
	window->draw(enemy);
	window->draw(cursor);

	endDraw();
}
