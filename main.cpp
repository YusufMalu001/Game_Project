#include "raylib.h"

int main() {
    // Initialization
    int screenWidth = 800;
    int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "My First Raylib Game");

    // Game loop
    while (!WindowShouldClose()) {  // Detect window close button or ESC key
        BeginDrawing();
        ClearBackground(RAYWHITE);

        // Draw some text
        DrawText("Hello, Raylib!", 190, 200, 20, LIGHTGRAY);

        EndDrawing();
    }

    // De-Initialization
    CloseWindow(); // Close window and OpenGL context

    return 0;
}
