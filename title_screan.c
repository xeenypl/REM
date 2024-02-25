#include <stdio.h>
#include <stdlib.h>
#include <raylib.h>

#include "./game.h"

static void render_title_screan(Game *game) {
    (void)game;
    ClearBackground(BLACK);
    DrawText(
        "Wellcome to " GAME_NAME,
        (SCREEN_WIDTH / 2) - 50,
        (SCREEN_HEIGHT / 2) - 15,
        30,
        WHITE
    );
}

static void update_title_screan(Game *game) {
    (void)game;
    if (GetKeyPressed() != 0) {
    }
}

void title_screan(Game *game) {
    static Scene scene = {
        .init = NULL,
        .render = render_title_screan,
        .update = update_title_screan,
    };
    set_scene(game, &scene);
}


