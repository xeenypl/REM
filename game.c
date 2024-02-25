#include <stdlib.h>
#include <stdio.h>

#include "./game.h"

Game *init_game(void) {
    Game *result = calloc(sizeof(Game), 0);
    if (result == NULL) {
        printf("Buy more ram\n");
        exit(0);
    }
    title_screan(result);
    return result;
}
