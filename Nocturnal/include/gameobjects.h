#ifndef GAMEOBJECTS_H
#define GAMEOBJECTS_H

class GameObjects
{
public:
	GameObjects() = default;
	~GameObjects() = default;

	virtual void update();
	virtual void render();
};

#endif