#include "Game.h"
static int mrSmallX = 300;
static int mrSmallY = 150;

Game::Game() {
	Game::window = NULL;
	Game::renderer = NULL;
	Game::running = true;
	Game::mouseDownX = 0;
	Game::mouseDownY = 0;
	Game::mouseDown = 0;
	Game::mouseUp = 0;
	Game::currentFrame = 0;
	Game::currentRow = 5;
}

Game::~Game() {
	delete window;
	delete renderer;
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, int flags) {
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		std::cout << "SDL init success!\n";

		window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

		if (window != 0) {
			std::cout << "Window creation success!\n";

			renderer = SDL_CreateRenderer(window, -1, 0);

			if (renderer != 0) {
				std::cout << "Renderer creation success!\n";

				TextureManager::Instance()->loadTexture("assets/img1.png", "img1", renderer);
				TextureManager::Instance()->loadTexture("assets/img2.png", "img2", renderer);
				TextureManager::Instance()->loadTexture("assets/img3.png", "img3", renderer);
				TextureManager::Instance()->loadTexture("assets/img4.png", "img4", renderer);

				//TextureManager::Instance()->loadTexture("assets/mr.small.png", "small", renderer);
				//TextureManager::Instance()->toggleVisibility("small");

				TextureManager::Instance()->loadTexture("assets/sprite.png", "sprite", renderer);
				TextureManager::Instance()->toggleVisibility("sprite");
			}
			else {
				std::cout << "Renderer init failed!\n";
				return false;
			}
		}
		else {
			std::cout << "Window init failed!\n";
			return false;
		}
	}
	else {
		std::cout << "SDL init failed!\n";
		return false;
	}

	std::cout << "Init succes!\n";
	running = true;

	return true;
}

void Game::render() {
	// set window background
	SDL_SetRenderDrawColor(renderer, 0, 128, 0, 255);

	SDL_RenderClear(renderer);

	int ww, wh;
	SDL_GetWindowSize(window, &ww, &wh);

	TextureManager::Instance()->drawTexture("img1", 0, 0, ww / 2, wh / 2, renderer);
	TextureManager::Instance()->drawTexture("img2", ww / 2, 0, ww / 2, wh / 2, renderer);
	TextureManager::Instance()->drawTexture("img3", 0, wh / 2, ww / 2, wh / 2, renderer);
	TextureManager::Instance()->drawTexture("img4", ww / 2, wh / 2, ww / 2, wh / 2, renderer);
	
	TextureManager::Instance()->drawOneFrameFromTexture("sprite", mrSmallX, mrSmallY, 46, 49, currentRow, currentFrame, renderer, frameFlip);

	TextureManager::Instance()->drawRecnatgle(renderer, 0, 0, 40, 20, 2);

	SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
	SDL_RenderDrawLine(renderer, ww / 2, 0, ww / 2, wh);
	SDL_RenderDrawLine(renderer, 0, wh / 2, ww, wh / 2);

	SDL_RenderPresent(renderer);
}

void Game::update() {
	int numberOfFramesInSpriteSheet = 4;

	if (currentRow == 5) {
		int numberOfFramesInSpriteSheet = 8;
	}

	int animationSpeed = 150;
	currentFrame = int(((SDL_GetTicks() / animationSpeed) % numberOfFramesInSpriteSheet));;
}

void Game::handleEvent() {
	SDL_Event event;

	if (SDL_PollEvent(&event)) {
		int msx, msy, ww, wh;
		SDL_GetWindowSize(window, &ww, &wh);

		switch (event.type) {
		case SDL_QUIT:
			running = false;
			break;
		case SDL_MOUSEBUTTONDOWN: {
			if (event.button.button == SDL_BUTTON_LEFT) {
				SDL_GetMouseState(&msx, &msy);
				mouseDownX = msx;
				mouseDownY = msy;
				Game::mouseDown = (msx > ww / 2) + (msy > wh / 2) * 2;
			}

			if (event.button.button == SDL_BUTTON_RIGHT) {
				SDL_GetMouseState(&msx, &msy);
				mrSmallX = msx - 32;
				mrSmallY = msy - 32;
			}
		}; break;
		case SDL_MOUSEBUTTONUP: {
			if (event.button.button == SDL_BUTTON_LEFT) {
				SDL_GetMouseState(&msx, &msy);
				Game::mouseUp = (msx > ww / 2) + (msy > wh / 2) * 2;
				switch (Game::mouseUp) {
				case 0:
					if (Game::mouseDown == 0) {
						TextureManager::Instance()->toggleVisibility("img1");
					}
					break;
				case 1:
					if (Game::mouseDown == 1) {
						TextureManager::Instance()->toggleVisibility("img2");
					}
					break;
				case 2:
					if (Game::mouseDown == 2) {
						TextureManager::Instance()->toggleVisibility("img3");
					}
					break;
				case 3:
					if (Game::mouseDown == 3) {
						TextureManager::Instance()->toggleVisibility("img4");
					}
					break;

				default:
					break;
				}
			}
		}
		case SDL_KEYDOWN: {
			if (event.key.keysym.sym == SDLK_UP && mrSmallY > 0) {
				currentRow = 4;
				mrSmallY -= 5;
			}
			if (event.key.keysym.sym == SDLK_DOWN && mrSmallY < wh - 49) {
				currentRow = 1;
				mrSmallY += 5;
			}
			if (event.key.keysym.sym == SDLK_LEFT && mrSmallX > 0) {
				currentRow = 2;
				mrSmallX -= 5;
			}
			if (event.key.keysym.sym == SDLK_RIGHT && mrSmallX < ww - 46) {
				currentRow = 3;
				mrSmallX += 5;
			}
			if (event.key.keysym.sym == SDLK_LCTRL) {
				TextureManager::Instance()->toggleVisibility("sprite");
			}
		}; break;
		case SDL_KEYUP: {
			currentRow = 5;
		}; break;
		case SDL_MOUSEMOTION: {
			SDL_GetMouseState(&msx, &msy);
			TextureManager::rgb[0] = (int)(((double)msx / ww) * 255);
			TextureManager::rgb[1] = (int)(((double)msy / wh) * 255);
			TextureManager::rgb[2] = (int)(((((double)msx / ww) + ((double)msy / wh)) / 2) * 255);
		}; break;

		default:
			break;
		}
	}
}

void Game::clean() {
	std::cout << "Cleaning game!" << std::endl;
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

bool Game::isRunning() const {
	return Game::running;
}