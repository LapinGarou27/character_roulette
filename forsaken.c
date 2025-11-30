#include "include/rchar.h"
#include <stdlib.h>
#include <time.h>

forsaken_t forsaken_choose[] = {
    {.character_num = 0, .character = "Noob\n"},
    {.character_num = 1, .character = "Elliot\n"},
    {.character_num = 2, .character = "Shed\n"},
    {.character_num = 3, .character = "007n7\n"},
    {.character_num = 4, .character = "Two Time\n"},
    {.character_num = 5, .character = "Guest\n"},
    {.character_num = 6, .character = "Builder\n"},
    {.character_num = 7, .character = "Taph\n"},
    {.character_num = 8, .character = "Dusekkar\n"},
    {.character_num = 9, .character = "Veeronica\n"},
    {.character_num = 10, .character = "Chance\n"},
    {.character_num = 84, .character = NULL},
};

char *forsaken_character(void)
{
    int rint = 0;
    int i = 0;
    char *win = forsaken_choose[i].character;
    char *lose = "No reroll for you !\n";

    srand(time(NULL));
    rint =  rand() % 50;
    for (; rint != forsaken_choose[i].character_num; i += 1){
        if (forsaken_choose[i].character_num == 84){
            return lose;
        }
    }
    return win;
}