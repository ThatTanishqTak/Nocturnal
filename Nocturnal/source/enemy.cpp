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
	spawnTime += GetFrameTime();
	if (spawnTime >= 5.0f)
	{
		enemyPos = { static_cast<float>(GetRandomValue(10, windowWidth - 100)), static_cast<float>(GetRandomValue(10, windowHeight - 100)) };
		spawnTime = 0.0f;
	}
}

void Enemy::render()
{
	DrawRectangle(static_cast<int>(enemyPos.x), static_cast<int>(enemyPos.y), 50, 50, WHITE); // Rendering a simple enemy
}