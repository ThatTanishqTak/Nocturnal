// The user interface class

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "globals.h"
#include "raylib.h"
#include <sstream>
#include <iomanip>

class UserInterface : public GameObjects
{
public:
	UserInterface(); // UserInterface constructor
	~UserInterface(); // UserInterface destructor

	virtual void update(); // Virtual update
	virtual void render(); // Virtual render

private:
	Texture2D background; // variable to store the background texture
	std::string formatTime(float gameTime); // Function to convert time(in seconds) to XX:XX format
};

#endif