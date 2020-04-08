#pragma once
#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

class Player : public GameObject
{
public:
	Player(/*sf::RenderWindow* hwnd, Input* in*/);
	~Player();

	void handleInput(float dt);
	void update(float dt);
private:

	//sf::RenderWindow* window;
	//Input* input;

	float speed;

	float x_speed;
	float y_speed;

};

