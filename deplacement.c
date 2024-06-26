#include <stdio.h>

#include "deplacement.h"
#include "windowsInit.h"
#include "draw.h"
#include "image.h"
#include "input.h"

int vitesse = 10;

MovementFunctions carreMovement = { moveCarreUp, moveCarreDown,
    moveCarreLeft, moveCarreRight };

void moveCarreUp() {
    if (carrePosY > 0) {
        carrePosY -= vitesse;
        playerCarre.position.y -= vitesse;
    }
}

void moveCarreDown() {
    if (carrePosY < windowHeight - carreHeight) {
        carrePosY += vitesse;
        playerCarre.position.y += vitesse;
    }
}

void moveCarreLeft() {
    if (carrePosX > 0) {
        carrePosX -= vitesse;
        playerCarre.position.x -= vitesse;
    }
}

void moveCarreRight() {
    if (carrePosX < windowWidth - carreWidth) {
        carrePosX += vitesse;
        playerCarre.position.x += vitesse;
    }
}

void movement() {

    if (zPressed && !sPressed) {
        moveCarreUp();
    }
    else if (!zPressed && sPressed) {
        moveCarreDown();
    }

    if (qPressed && !dPressed) {
        moveCarreLeft();
    }
    else if (!qPressed && dPressed) {
        moveCarreRight();
    }
}