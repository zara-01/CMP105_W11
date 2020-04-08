#include "Player.h"
#include <iostream>

Player::Player(/*sf::RenderWindow* hwnd, Input* in*/)
{
	///*window = hwnd;
	//input = in;*/


	speed = 200.f;

	x_speed = speed;
	y_speed = speed;


}

Player::~Player()
{


}

void Player::update(float dt)
{
	//std::cout << x_speed * dt << std::endl;
	move(x_speed * dt, y_speed * dt);
	x_speed = 0;
	y_speed = 0;

}

void Player::handleInput(float dt)
{
	// Close window on Escape pressed.
	/*if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}*/

	//move up
	if (input->isKeyDown(sf::Keyboard::Up))
	{
		y_speed = -100;
	}
	/*else
	{
		y_speed = 0;
	}*/

	//move right
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		x_speed = 100;
	}
	/*else
	{
		x_speed = 0;
	}*/

	//move down
	if (input->isKeyDown(sf::Keyboard::Down))
	{
		y_speed = 100;
	}
	/*else
	{
		y_speed = 0;
	}*/

	//move left
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		x_speed = -100;
	}
	/*else
	{
		x_speed = 0;
	}*/
}
