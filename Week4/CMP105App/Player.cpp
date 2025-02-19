#include "Player.h"

Player::Player()
{
	mushroom.loadFromFile("gfx/mushroom.png");
	setTexture(&mushroom);
	setPosition(sf::Vector2f(100, 100));
	setSize(sf::Vector2f(100, 100));
	setVelocity(0.f, 0.f);
	
	
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::D))
	{
		setVelocity(getVelocity().x + 0.1, getVelocity().y);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		setVelocity(getVelocity().x - 0.1, getVelocity().y);
	}

}

void Player::update(float dt)
{
	move(velocity*dt);

}