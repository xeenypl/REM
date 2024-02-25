#include <stdlib.h>
#include <raylib.h>

#include "./game.h"

void set_scene(Game *game, Scene *scene) {
    game->current_scene = scene;
    if (scene->init != NULL) {
        scene->init(game);
    }
}

int main(void) {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, GAME_NAME);
    SetTargetFPS(GAME_FPS);

    Game *game = init_game();

    while (!WindowShouldClose()) {
        BeginDrawing();
        game->current_scene->render(game);
        if (game->current_scene->update) {
            game->current_scene->update(game);
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
