#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "globals.h"
#include "raylib.h"
#include <sstream>
#include <iomanip>

class UserInterface : public GameObjects
{
public:
	UserInterface();
	~UserInterface();

	virtual void update();
	virtual void render();

private:
	Texture2D background;

	std::string formatTime(float gameTime);
};

#endif