#include "userinterface.h"

UserInterface::UserInterface()
{
	//background = LoadTexture();

	gameObjects.push_back(this); 
}

UserInterface::~UserInterface()
{
	//UnloadTexture();
}

void UserInterface::update() { gameTime += GetFrameTime(); }

void UserInterface::render()
{
	DrawText(("TIME: " + formatTime(gameTime)).c_str(), windowWidth - 145, 0, 24, RED);
	DrawText(("SCORE: " + std::to_string(score)).c_str(), 10, 0, 24, RED);
	DrawText(("BULLETS: " + std::to_string(bullets)).c_str(), 10, 24, 24, RED);
}

std::string UserInterface::formatTime(float gameTime)
{
	int minutes = static_cast<int>(gameTime) / 60;
	int seconds = static_cast<int>(gameTime) % 60;

	std::ostringstream time;
	time << std::setw(2) << std::setfill('0') << minutes << ":" << std::setw(2) << seconds;

	return time.str();
}
