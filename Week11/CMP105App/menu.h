#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/GameObject.h"
#include "Framework/Input.h"
#include "Framework/AudioManager.h"
#include "Framework/GameState.h"
#include <string>
#include <iostream>



class menu {
public:
	menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	~menu();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;

	GameState* gameState;
	AudioManager* audio;

	sf::CircleShape circle;
	sf::RectangleShape rect;

	float speed;

	float x_speed;
	float y_speed;

	float x_rectSpeed;
	float y_rectSpeed;

};