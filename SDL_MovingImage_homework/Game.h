#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include "TextureManager.h"

class Game {
public:
	Game();
	~Game();
	bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool isRunning();
private:
	SDL_Window* window = NULL;
	SDL_Renderer* renderer = NULL;
	bool running;

	int imgPosX = 0;
	int imgPosY;
	int imgWidth = 100;
	int imgHeight = 100;

	bool moveToRight = true;
};