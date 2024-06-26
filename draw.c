#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "deplacement.h"
#include "draw.h"
#include "image.h"
#include "windowsInit.h"

int carreWidth = 150;
int carreHeight = 150;
int carrePosX = 450;
int carrePosY = 350;

void drawCarre() {
    SDL_RenderCopy(renderer, playerCarre.texture, NULL, &playerCarre.position);
}