#pragma once
#include "Framework/GameObject.h"
#include "Player.h"

class Enemy : public Player
{
	public:
		Enemy();
		~Enemy();

		void update(float dt);
		void setWindow(sf::RenderWindow* wnd);

		sf::Texture goomba;
		sf::RenderWindow* window;
};

