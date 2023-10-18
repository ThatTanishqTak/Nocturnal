// The player header file

#ifndef PLAYER_H
#define PLAYER_H

#include "globals.h"
#include "raylib.h"

class Player : public GameObjects // The player class
{
public:
	Player(); // Player constructor
	~Player(); // Player destructor (Might not be of need??)

	virtual void update(); // The player update function
	virtual void render(); // The player render function

private:
};

#endif