#include "globals.h"

std::list<GameObjects*> gameObjects; // Implemented game objects system

// Window dimensions
const int windowWidth = 1080;
const int windowHeight = 720;

// Player variables
Vector2 playerPos = GetMousePosition();
float radius = 10.0f;