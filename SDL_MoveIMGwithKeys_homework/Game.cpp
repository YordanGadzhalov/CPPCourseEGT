#include "Game.h"
#include <iostream>

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
		if (window != 0) 
		{
			std::cout << "window creation success\n";
			renderer = SDL_CreateRenderer(window, -1, 0);
			if (renderer != 0) 
			{
				std::cout << "renderer creation success\n";
				SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

				
				TextureManager::Instance()->loadTexture("assets/img1.png", "img1", renderer);
				imgPosY = (height / 2) - (imgHeight / 2);
				imgPosX = (width / 2) - (imgWidth / 2);
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

void Game::render() {


	SDL_SetRenderDrawColor(renderer, 0x00, 0x00, 0x00, 255);
	SDL_RenderClear(renderer);

	TextureManager::Instance()->drawTexture("img1", { imgPosX, imgPosY, imgWidth, imgHeight }, renderer);

	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		case SDL_KEYDOWN: {
			if (event.key.keysym.sym == SDLK_LEFT)
			{
				imgPosX--;
			}
			if (event.key.keysym.sym == SDLK_RIGHT)
			{
				imgPosX++;
			}
			if (event.key.keysym.sym == SDLK_UP)
			{
				imgPosY--;
			}
			if (event.key.keysym.sym == SDLK_DOWN)
			{
				imgPosY++;
			}
		}
		default: break;
		}
	}
}

void Game::update()
{
	int windowWidth;
	int windowHeight;
	SDL_GetWindowSize(window, &windowWidth, &windowHeight);


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
}

Game::~Game() {

}