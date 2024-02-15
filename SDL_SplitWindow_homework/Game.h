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

	int mouseDownPosX = -1;
	int mouseUpPosX = -1;
	int mouseDownPosY = -1;
	int mouseUpPosY = -1;

	bool showImage = false;

	bool isInFirstQuadrant = false;
	bool isInSecondQuadrant = false;
	bool isInThirdQuadrant = false;
	bool isInFourthQuadrant = false;

	int imgWidth;
	int imgHeight;


};