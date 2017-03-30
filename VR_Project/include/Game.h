#pragma once
#include "GL\glew.h"
#include "GL\wglew.h"
#include "SFML\Graphics.hpp"




/// <summary>
/// @author Bartosz Zych
/// @version 1.0
/// @brief top class which runs the game updates and renders
/// 
/// 
/// </summary>
class Game
{
public:
	Game();
	~Game();
	void init();
	void run();
	static const int WINDOW_WIDTH;
	static const int WINDOW_HEIGHT;
	
private:
	void processEvents();
	void update(double ms);
	void render();


	// update per milliseconds
	static const sf::Int32 s_MS_PER_UPDATE;

	// SFML main game window
	sf::RenderWindow m_window;

	
	sf::RectangleShape m_rectangle;
};

