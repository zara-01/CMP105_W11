#include "Level.h"


Level::Level(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	 
	/*testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);*/

	playerone.setInput(input);
	playerone.setTexture(&texture);
	playerone.setSize(sf::Vector2f(200, 200));
	playerone.setPosition(200, 200);

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

	if (input->isKeyDown(sf::Keyboard::M))
	{
		gameState->setCurrentState(State::MENU);
	}

	playerone.handleInput(dt);

}

// Update game objects
void Level::update(float dt)
{

	playerone.update(dt);

}


// Render level
void Level::render()
{
	beginDraw();

	window->draw(playerone);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}