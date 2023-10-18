// The game object file

#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

class GameObjects
{
public:
	GameObjects() = default; // Default constructor
	~GameObjects() = default; // Default destructor

	virtual void update() = 0; // Virtual update function
	virtual void render() = 0; // Virtual render function
};

#endif