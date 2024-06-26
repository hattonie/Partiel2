#include <SDL.h>
#include <stdio.h>

#include "windowsInit.h"
#include "deplacement.h"
#include "image.h"
#include "draw.h"
#include "input.h"

SDL_Event event;

int leftRectangleV = 0;
int rightRectangleV = 0;

void initAll() {
	loadImages();
	initImages();
}



void mainFunc() {
	drawCarre();
}

int main() {
	// Initialisation des bibliothèques externes
	if (initSDLWindow() != 0) {
		printf("Failed to initialize SDL window\n");
		return -1;
	}
	initAll();

	while (1) {
		clearRender(renderer);

		mainFunc();

		input();

		SDL_RenderPresent(renderer);
		SDL_Delay(10);
	}
	freeAll();
	return 0;
}