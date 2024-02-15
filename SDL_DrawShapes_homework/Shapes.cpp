#include "Shapes.h"

void Shapes::drawCircle(SDL_Renderer* renderer, int centerX, int centerY, int radius) {
	const int diameter = radius * 2;

	int x = (radius - 1);
	int y = 0;
	int tx = 1;
	int ty = 1;
	int error = tx - diameter;

	while (x >= y) {
		SDL_RenderDrawPoint(renderer, centerX + x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX + x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY - y);
		SDL_RenderDrawPoint(renderer, centerX - x, centerY + y);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX + y, centerY + x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY - x);
		SDL_RenderDrawPoint(renderer, centerX - y, centerY + x);

		if (error <= 0) {
			y++;
			error += ty;
			ty += 2;
		}

		if (error > 0) {
			x--;
			tx += 2;
			error += tx - diameter;
		}
	}

}

void Shapes::drawPentagon(SDL_Renderer* renderer, int centerX, int centerY, int sideLenght)
{
	int x[5];
	int y[5];
	for (int i = 0; i < 5; ++i) {
		x[i] = centerX + sideLenght * cos((i * 2 * M_PI) / 5);
		y[i] = centerY + sideLenght * sin((i * 2 * M_PI) / 5);
	}

	SDL_RenderDrawLine(renderer, x[0], y[0], x[1], y[1]);
	SDL_RenderDrawLine(renderer, x[1], y[1], x[2], y[2]);
	SDL_RenderDrawLine(renderer, x[2], y[2], x[3], y[3]);
	SDL_RenderDrawLine(renderer, x[3], y[3], x[4], y[4]);
	SDL_RenderDrawLine(renderer, x[4], y[4], x[0], y[0]);

}

void Shapes::drawHexagon(SDL_Renderer* renderer, int cX, int cY, int sideL)
{
	int x[6];
	int y[6];
	for (int i = 0; i < 6; ++i) {
		x[i] = cX + sideL * cos((i * 2 * M_PI) / 6);
		y[i] = cY + sideL * sin((i * 2 * M_PI) / 6);
	}

	SDL_RenderDrawLine(renderer, x[0], y[0], x[1], y[1]);
	SDL_RenderDrawLine(renderer, x[1], y[1], x[2], y[2]);
	SDL_RenderDrawLine(renderer, x[2], y[2], x[3], y[3]);
	SDL_RenderDrawLine(renderer, x[3], y[3], x[4], y[4]);
	SDL_RenderDrawLine(renderer, x[4], y[4], x[5], y[5]);
	SDL_RenderDrawLine(renderer, x[5], y[5], x[0], y[0]);

}