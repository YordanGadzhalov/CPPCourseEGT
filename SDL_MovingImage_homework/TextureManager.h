#pragma once
#include "Game.h"
#include <string>
#include <map>

class TextureManager {
public:
	bool loadTexture(const char* fileName, std::string id, SDL_Renderer* ren);
	void drawTexture(std::string id, SDL_Rect destinationRect,
		SDL_Renderer* ren,
		SDL_RendererFlip flip = SDL_FLIP_NONE);

	static TextureManager* Instance() { // TextureManager is a singleton, only one instance allowed
		if (instance == 0) {
			instance = new TextureManager();
			return instance;
		}
		return instance;
	}

private:
	std::map<std::string, SDL_Texture*> textureMap;
	TextureManager() {} // TextureManager is a singleton, the constructor is a private field
	static TextureManager* instance;
};