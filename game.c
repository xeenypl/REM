#include <raylib.h>

#include "./config.h"

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_NAME);
    SetTargetFPS(GAME_FPS);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        DrawText("Wellcome to " GAME_NAME, (SCREEN_WIDTH / 2) - 50, (SCREEN_HEIGHT / 2) - 15, 30, WHITE);
        
        EndDrawing();
    }

    CloseWindow();
    
    return 0;
}
