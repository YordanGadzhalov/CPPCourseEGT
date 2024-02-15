#include "Game.h"

Game* game = NULL;

const int WINDOW_WIDTH = 800;
const int WINDOWS_HEIGHT = 600;

int main(int argc, char* argv[]) {

	game = new Game();

	game->init("SDL image window", 
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,  
		WINDOW_WIDTH, WINDOWS_HEIGHT, 
		SDL_WINDOW_RESIZABLE); 

	while (game->isRunning()) {
		game->handleEvent();
		game->update();
		game->render();
	}

	game->clean();

	return 0;
}