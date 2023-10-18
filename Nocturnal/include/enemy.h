// The enemy header file

#ifndef ENEMY_H
#define ENEMY_H

#include "globals.h"
#include "raylib.h"

class Enemy : public GameObjects // The enemy class
{
public:
	Enemy(); // Enemy constructor
	~Enemy(); // Enemy destructor

	virtual void update(); // Enemy update function
	virtual void render(); // Enemy render function

private:
	void spawnEnemy();
};

#endif