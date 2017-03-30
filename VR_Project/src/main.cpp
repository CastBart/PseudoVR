#include "Game.h"

/// /// <summary>
/// @brief Main application entry point.
/// 
/// 
/// </summary>
/// <param name="argc">number of argument parameters</param>
/// <param name="argv">c-style string array of executable parameters</param>
/// <returns>exit code, 0 for success</returns>
int main(int argc, char* agrv[])
{
	Game& game = Game();
	game.init();
	game.run();
	return EXIT_SUCCESS;
}