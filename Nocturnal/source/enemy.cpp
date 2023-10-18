// The implementation of the enemy class

#include "enemy.h"

Enemy::Enemy() { gameObjects.push_back(this); } // Push back into the game object list

Enemy::~Enemy()
{
	// The enemy destructor
}

void Enemy::update()
{
	// Enemy spawn mechanic
	spawnTime += GetFrameTime(); // Adding 1 second per second of real-time
	if (spawnTime >= 5.0f) // Spawn an enemy every 5 seconds
	{
		enemyPos = { static_cast<float>(GetRandomValue(10, windowWidth - 100)), static_cast<float>(GetRandomValue(10, windowHeight - 100)) };
		spawnTime = 0.0f;
	}

	if (CheckCollisionCircleRec({ playerPos.x, playerPos.y }, radius, enemyRec)) { isAlive = false; }
}

void Enemy::render()
{
	// Rendering a simple rectangle as an enemy
	if (isAlive) { DrawRectangle(static_cast<int>(enemyPos.x), static_cast<int>(enemyPos.y), 50, 50, WHITE); }
}