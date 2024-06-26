#include "input.h"
#include "deplacement.h"
#include "draw.h"

// Initialisation des variables d'input sur false
bool zPressed = false;
bool sPressed = false;
bool qPressed = false;
bool dPressed = false;

void switchTrue() {
    switch (event.key.keysym.sym) {
    case SDLK_UP:
        zPressed = true;
        break;
    case SDLK_DOWN:
        sPressed = true;
        break;
    case SDLK_LEFT:
        qPressed = true;
        break;
    case SDLK_RIGHT:
        dPressed = true;
        break;
    }
}

void switchFalse() {
    switch (event.key.keysym.sym) {
    case SDLK_UP:
        zPressed = false;
        break;
    case SDLK_DOWN:
        sPressed = false;
        break;
    case SDLK_LEFT:
        qPressed = false;
        break;
    case SDLK_RIGHT:
        dPressed = false;
        break;
    }
}

void input(int* continuer) {
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            *continuer = 0;
        }
        if (event.type == SDL_KEYDOWN) {
            switchTrue();
        }
        else if (event.type == SDL_KEYUP) {
            switchFalse();
        }
    }
    movement();
}