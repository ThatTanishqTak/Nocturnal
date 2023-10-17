#include "globals.h"
#include "gameobjects.h"
#include "raylib.h"
#include "player.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "Nocturnal");
	SetTargetFPS(60);

	Player player;

	while (!WindowShouldClose())
	{
		for (GameObjects* gameObects : gameObjects) { gameObects->update(); }

		BeginDrawing();
		ClearBackground(BLACK);

		for (GameObjects* gameObects : gameObjects) { gameObects->render(); }

		EndDrawing();
	}
	CloseWindow();

	return 0;
}