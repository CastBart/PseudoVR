#include "Game.h"

const sf::Int32 Game::s_MS_PER_UPDATE = 10.0;

const int Game::WINDOW_HEIGHT = 720;
const int Game::WINDOW_WIDTH = 1280;

Game::Game()
{
	m_rectangle.setSize(sf::Vector2f(100, 100));
	m_rectangle.setFillColor(sf::Color::Blue);

	m_rectangle.setOrigin(sf::Vector2f(m_rectangle.getLocalBounds().width / 2, m_rectangle.getLocalBounds().height / 2));
	m_rectangle.setPosition(Game::WINDOW_WIDTH / 2.0f, Game::WINDOW_HEIGHT / 2.0f);
}


Game::~Game()
{
}

/// <summary>
/// @brief initialize game window 
/// 
/// 
/// </summary>
void Game::init()
{

	// Defining window dimensions
	

	sf::Uint32 screenWidth = Game::WINDOW_WIDTH;
	sf::Uint32 screenHeight = Game::WINDOW_HEIGHT;

	// Define window settings
	
	sf::ContextSettings windowSettings = sf::ContextSettings();
	windowSettings.antialiasingLevel = 4u;

	m_window.create(sf::VideoMode(screenWidth, screenHeight), "Speed Souls Supreme", sf::Style::Default, windowSettings);

	m_window.setVerticalSyncEnabled(true);

}

/// <summary>
/// @brief main loop of the game
/// 
/// 
/// </summary>
void Game::run()
{
	sf::Clock clock;
	sf::Int32 lag = 0;
	sf::Time dt = sf::Time::Zero;
	while (m_window.isOpen())
	{
		dt = clock.restart();
		lag += dt.asMilliseconds();
		processEvents();
		while (lag > s_MS_PER_UPDATE)
		{
			update(static_cast<double>(dt.asMilliseconds()));
			lag -= s_MS_PER_UPDATE;
		}
		update(static_cast<double>(dt.asMilliseconds()));
		render();
	}
}


/// <summary>
/// @brief proccess events in the game
/// 
/// 
/// </summary>
void Game::processEvents()
{
	sf::Event event;

	while (m_window.pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			m_window.close();
			break;
		case sf::Event::KeyPressed:
			break;
		case sf::Event::KeyReleased:
			break;
		default:
			break;
		}
	}
}

/// <summary>
/// @brief main update for the game
/// 
/// 
/// </summary>
/// <param name="ms">time per update</param>
void Game::update(double ms)
{
}

/// <summary>
/// @brief main render function for the game
/// 
/// 
/// </summary>
void Game::render()
{
	m_window.clear(sf::Color::Black);
	m_window.draw(m_rectangle);
	m_window.display();
}
