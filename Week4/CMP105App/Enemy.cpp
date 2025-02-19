#include "Enemy.h"

Enemy::Enemy()
{
	setPosition(200, 200);
	setSize(sf::Vector2f(100, 100));

	goomba.loadFromFile("gfx/Goomba.png");

	setTexture(&goomba);
	setVelocity(sf::Vector2f(0, -0.1));
}

Enemy::~Enemy()
{

}

void Enemy::setWindow(sf::RenderWindow* wnd)
{
	window = wnd;
}

void Enemy::update(float dt)
{
	if ((getVelocity().y > 0) && (getPosition().y + getSize().y > window->getSize().y))
	{
		setVelocity(sf::Vector2f(0, -0.1));
	}

	if ((getVelocity().y < 0) && (getPosition().y < 0))
	{
		setVelocity(sf::Vector2f(0, 0.1));
	}

	move(velocity);
}