// The main game file

// All the header files
#include "globals.h"
#include "gameobjects.h"
#include "raylib.h"
#include "userinterface.h"
#include "enemy.h"
#include "player.h"

int main()
{
	InitWindow(windowWidth, windowHeight, "Nocturnal"); // Initialize window
	SetTargetFPS(60); // Lock the FPS

	// Instantiate game objects
	UserInterface userInterface;
	Enemy enemy;
	Player player;

	// The main game loop
	while (!WindowShouldClose())
	{
		for (GameObjects* gameObjects : gameObjects) { gameObjects->update(); } // The updtae loop

		BeginDrawing();
		ClearBackground(BLACK);

		for (GameObjects* gameObjects : gameObjects) { gameObjects->render(); } // The render loop

		EndDrawing();
	}

	CloseWindow(); // De-Initialize window

	return 0; // Exit code
}