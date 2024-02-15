#pragma once
#include "Game.h"
#include <map>

class TextureManager {
public:
	bool loadTexture(const char* fileName, std::string id, SDL_Renderer* ren);

	void drawTexture(std::string id, int x, int y, int width, int height, SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE);

	void drawOneFrameFromTexture(std::string id, int x, int y, int width, int height, int currentRow, int currentFrame,
		SDL_Renderer* ren, SDL_RendererFlip flip = SDL_FLIP_NONE);

	void toggleVisibility(std::string id);

	static TextureManager* Instance();

	static void drawRecnatgle(SDL_Renderer* renderer, int xpos, int ypos, int width, int height, int border);
	static int rgb[];


private:
	std::map<std::string, SDL_Texture*> textureMap; 
	std::map<std::string, bool> display; 
	TextureManager() {}
	static TextureManager* instance;
};