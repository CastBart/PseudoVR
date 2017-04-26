#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>


#include <glm/glm.hpp>

#include <glm/gtc/matrix_transform.hpp>


#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <SFML\Graphics.hpp>

#include <include/Debug.h>

#define STB_IMAGE_IMPLEMENTATION
#include <include/stb_image.h>

#include "include/ProgramIds.h"
#include "include/Cube.h"
#include <fstream>
#include <include\Head.h>



class Game
{
public:
	Game();
	Game(sf::ContextSettings settings);
	~Game();
	void run();

	sf::RenderWindow window;
	bool isRunning = false;
	void initialize();
	void update(double);
	void render();
	void unload();

	std::string loadShader(const std::string & fileName);
	enum class GameState { Playing, Gameover};
	GameState currentState = GameState::Playing;
private:
	Cube m_player;
	ProgramIds m_ids;

	sf::Time m_elapsed;
	float nextWave = 0;

	const sf::Time MS_PER_UPDATE = sf::seconds(1 / 60.0f);
	Head m_head;

};

#endif