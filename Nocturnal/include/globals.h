// The global variable header file

#ifndef GLOBALS_H
#define GLOBALS_H

#include "gameobjects.h"
#include "raylib.h"
#include <list>

			/* EVERY VARIABLE HERE IS TO BE ALSO DEFINED IN THE "globals.cpp" FILE */

extern std::list<GameObjects*> gameObjects; // Game objects system

// Window dimensions
extern const int windowWidth;
extern const int windowHeight;

// Player variables
extern Vector2 playerPos;
extern float radius;

// Enemy variables
extern Vector2 enemyPos;
extern Rectangle enemyRec;
extern float spawnTime;
extern bool isAlive;

// UserInterface Variables

#endif