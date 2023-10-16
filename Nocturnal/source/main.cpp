#include "globals.h"
#include "gameobjects.h"
#include "raylib.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "Nocturnal");
	SetTargetFPS(60);

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