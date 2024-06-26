#ifndef DEPLACEMENT_H
#define DEPLACEMENT_H

extern int vitesse;

void movement();

//fonction de mouvement du carre
void moveCarreUp();
void moveCarreDown();
void moveCarreLeft();
void moveCarreRight();

//structure pointeur de fonction O_O
typedef struct {
    void (*up)();
    void (*down)();
    void (*left)();
    void (*right)();
} MovementFunctions;
extern MovementFunctions carreMovement;

#endif
