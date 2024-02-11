#include "Game.h"
#include <iostream>


bool Game::init(const char* title, int xpos,
    int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) //window init success
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) //renderer init success
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
				
				TextureManager::Instance()->loadTexture("assets/spritesheet.jpg", "spritesheet", renderer);
				//TextureManager::Instance()->loadTexture("assets/tvpic.png", "tvpic", renderer);
				//TextureManager::Instance()->loadTexture("assets/image.bmp", "image", renderer);
			}

			else {
				std::cout << "renderer init failed\n";
				return false;
			}
		}
		else {
			std::cout << "window init failed\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init fail\n";
		return false;
	}
	std::cout << "init success\n";
	running = true;
	return true;
}

//Draws the picture
void Game::render() {

	SDL_RenderClear(renderer);

	TextureManager::Instance()->drawOneFrameFromTexture("spritesheet", 0, 0, 125, 130, 1, currentFrame,  renderer);
	TextureManager::Instance()->drawOneFrameFromTexture("spritesheet", 400, 0, 125, 130, 2, currentFrame, renderer, SDL_FLIP_HORIZONTAL);
	//TextureManager::Instance()->drawTexture("image", 400, 0, 400, 350, renderer, SDL_FLIP_HORIZONTAL);

	SDL_RenderPresent(renderer);
}

//Manages all events
void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		default: break;
		}
	}
}

//Makes the pictures move / FRAMES
void Game::update() {
	currentFrame = int(((SDL_GetTicks() / 200 % 5))); // % 5 for 5 frames // 200 for speed
	
}


void Game::clean() {
	std::cout << "cleaning game\n";
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}


bool Game::isRunning() {
	return Game::running;
}


Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::currentFrame = 0;
}


Game::~Game() {}