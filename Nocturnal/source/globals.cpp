#include "globals.h"

std::list<GameObjects*> gameObjects; // Implemented game objects system

// Window dimensions
const int windowWidth = 1080;
const int windowHeight = 720;

// Player variables
Vector2 playerPos = GetMousePosition();
float radius = 10.0f;

// Enemy variables
Vector2 enemyPos = { GetRandomValue(10, windowWidth - 100), GetRandomValue(10, windowHeight - 100) };
float spawnTime = 0.0f;
Rectangle enemyRec = { enemyPos.x, enemyPos.y, 50, 50 };