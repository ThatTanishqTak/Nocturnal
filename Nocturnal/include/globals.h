#ifndef GLOBALS_H
#define GLOBALS_H

#include "gameobjects.h"
#include "raylib.h"
#include <list>

extern std::list<GameObjects*> gameObjects; // Game objects system

// Window dimensions
extern const int windowWidth;
extern const int windowHeight;

// Player variables
extern Vector2 playerPos;
extern float radius;

// Enemy variables
extern Vector2 enemyPos;
extern float spawnTime;
extern Rectangle enemyRec;

#endif