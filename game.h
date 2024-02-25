#ifndef GAME_H
#define GAME_H

#define GAME_NAME "Game"
#define GAME_FPS 60

#define SCREEN_HEIGHT 600
#define SCREEN_WIDTH 800

typedef struct Game Game;
typedef struct Scene Scene;
typedef void (*RemCb)(Game *game);

void  set_scene(Game *game, Scene *scene);
Game *init_game(void);

// Game screans/mods.
void  title_screan(Game *game);

struct Scene {
    void (*init)(Game *game);
    void (*render)(Game *game);
    void (*update)(Game *game);
};

struct Game {
    Scene *current_scene;
};

#endif
