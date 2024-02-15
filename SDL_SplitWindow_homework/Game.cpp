#include "Game.h"
#include <iostream>

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {

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
				SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
				SDL_RenderClear(renderer);

				// use the TextureManager to load textures
				TextureManager::Instance()->loadTexture("assets/img1.jpg", "cat1", renderer);
				TextureManager::Instance()->loadTexture("assets/img2.jpg", "cat2", renderer);
				TextureManager::Instance()->loadTexture("assets/red.png", "red", renderer);


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

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);

	if (isInFirstQuadrant)
	{
		if (showImage) {
			TextureManager::Instance()->drawTexture("img1", { 0,0,ww / 2, wh / 2 }, renderer);
		}
		else
		{
			TextureManager::Instance()->drawTexture("red", { 0,0,ww / 2, wh / 2 }, renderer);
		}
		isInFirstQuadrant = false;
	}
	else if (isInSecondQuadrant)
	{
		if (showImage) {
			TextureManager::Instance()->drawTexture("img2", { ww / 2,0,ww / 2, wh / 2 }, renderer);
		}
		else
		{
			TextureManager::Instance()->drawTexture("red", { ww / 2,0,ww / 2, wh / 2 }, renderer);
		}
		isInSecondQuadrant = false;
	}
	else if (isInThirdQuadrant)
	{
		if (showImage) {
			TextureManager::Instance()->drawTexture("img1", { 0,360,640, 360 }, renderer);
		}
		else
		{
			TextureManager::Instance()->drawTexture("red", { 0,360,640, 360 }, renderer);
		}
		isInThirdQuadrant = false;
	}
	else if (isInFourthQuadrant)
	{
		if (showImage)
		{
			TextureManager::Instance()->drawTexture("img2", { 640,360,640, 360 }, renderer);
		}
		else
		{
			TextureManager::Instance()->drawTexture("red", { 640,360,640, 360 }, renderer);
		}
		isInFourthQuadrant = false;
	}

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);
	SDL_RenderDrawLine(renderer, ww / 2, 0, ww / 2, wh);

	SDL_RenderPresent(renderer);
}

void Game::handleEvents() {
	SDL_Event event;
	if (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_QUIT: running = false; break;
		case SDL_MOUSEBUTTONDOWN: {
			if (event.button.button == SDL_BUTTON_LEFT)
			{
				SDL_GetMouseState(&mouseDownPosX, &mouseDownPosY);
			}
		}; break;
		case SDL_MOUSEBUTTONUP: {
			if (event.button.button == SDL_BUTTON_LEFT)
			{
				SDL_GetMouseState(&mouseUpPosX, &mouseUpPosY);
			}
		}; break;
		default: break;
		}
	}
}

void Game::update()
{
	if ((mouseDownPosX >= 0 && mouseDownPosX <= 640)
		&& (mouseDownPosY >= 0 && mouseDownPosY <= 360)
		&& (mouseUpPosX >= 0 && mouseUpPosX <= 640)
		&& (mouseUpPosY >= 0 && mouseUpPosY <= 360))
	{
		mouseDownPosX = -1;
		mouseDownPosY = -1;
		mouseUpPosX = -1;
		mouseUpPosY = -1;
		if (!showImage)
		{
			showImage = true;
		}
		else
		{
			showImage = false;
		}
		isInFirstQuadrant = true;

	}
	else if ((mouseDownPosX >= 640 && mouseDownPosX <= 1280)
		&& (mouseDownPosY >= 0 && mouseDownPosY <= 360)
		&& (mouseUpPosX >= 640 && mouseUpPosX <= 1280)
		&& (mouseUpPosY >= 0 && mouseUpPosY <= 360))
	{
		mouseDownPosX = -1;
		mouseDownPosY = -1;
		mouseUpPosX = -1;
		mouseUpPosY = -1;

		if (!showImage)
		{
			showImage = true;
		}
		else
		{
			showImage = false;
		}
		isInSecondQuadrant = true;
	}
	else if ((mouseDownPosX >= 0 && mouseDownPosX <= 640)
		&& (mouseDownPosY >= 360 && mouseDownPosY <= 720)
		&& (mouseUpPosX >= 0 && mouseUpPosX <= 640)
		&& (mouseUpPosY >= 360 && mouseUpPosY <= 720))
	{
		mouseDownPosX = -1;
		mouseDownPosY = -1;
		mouseUpPosX = -1;
		mouseUpPosY = -1;
		if (!showImage)
		{
			showImage = true;
		}
		else
		{
			showImage = false;
		}
		isInThirdQuadrant = true;
	}
	else if ((mouseDownPosX >= 640 && mouseDownPosX <= 1280)
		&& (mouseDownPosY >= 360 && mouseDownPosY <= 720)
		&& (mouseUpPosX >= 640 && mouseUpPosX <= 1280)
		&& (mouseUpPosY >= 360 && mouseUpPosY <= 720))
	{
		mouseDownPosX = -1;
		mouseDownPosY = -1;
		mouseUpPosX = -1;
		mouseUpPosY = -1;
		if (!showImage)
		{
			showImage = true;
		}
		else
		{
			showImage = false;
		}

		isInFourthQuadrant = true;
	}

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