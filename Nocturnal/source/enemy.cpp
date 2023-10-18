#include "enemy.h"
#include <iostream>

Enemy::Enemy() { gameObjects.push_back(this); }

Enemy::~Enemy()
{

}

void Enemy::update()
{
	spawnTime += GetFrameTime();
	if (spawnTime >= 5.0f)
	{
		enemyPos = { static_cast<float>(GetRandomValue(10, windowWidth - 100)), static_cast<float>(GetRandomValue(10, windowHeight - 100)) };
		spawnTime = 0.0f;
	}
}

void Enemy::render()
{
	DrawRectangle(static_cast<int>(enemyPos.x), static_cast<int>(enemyPos.y), 50, 50, WHITE);
}