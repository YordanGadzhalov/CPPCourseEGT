#include "TextureManager.h"

bool TextureManager::loadTexture(const char* fileName, std::string id, SDL_Renderer* ren) {

	SDL_Surface* tempSurface = IMG_Load(fileName); // fileName is the file path from the project directory to the image

	if (tempSurface == 0)
		return false;  // something went wrong

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, tempSurface);
	SDL_FreeSurface(tempSurface);

	if (tex != 0) { // if texture creation successful, save the texture in the map
		textureMap[id] = tex; // id is a unique identifier/name for each texture, the texture can be accessed later using this id
		return true;
	}

	return false; // something went wrong

}

void TextureManager::drawTexture(std::string id, SDL_Rect destinationRect,
	SDL_Renderer* ren,
	SDL_RendererFlip flip) {

	SDL_RenderCopyEx(ren, textureMap[id], NULL, &destinationRect, 0, 0, flip);
}

TextureManager* TextureManager::instance = 0;