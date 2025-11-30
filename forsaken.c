#include "include/rchar.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

forsaken_t forsaken_choose[] = {
    {.character_num = 0, .character = "Noob"},
    {.character_num = 1, .character = "Elliot"},
    {.character_num = 2, .character = "Shed"},
    {.character_num = 3, .character = "007n7"},
    {.character_num = 4, .character = "Two Time"},
    {.character_num = 5, .character = "Guest"},
    {.character_num = 6, .character = "Builder"},
    {.character_num = 7, .character = "Taph"},
    {.character_num = 8, .character = "Dusekkar"},
    {.character_num = 9, .character = "Veeronica"},
    {.character_num = 10, .character = "Chance"},
    {.character_num = 84, .character = NULL},
};

int main(void)
{
    int rint = 0;
    int i = 0;

    srand(time(NULL));
    rint =  rand() % 10;
    for (; rint %10 != forsaken_choose[i].character_num; i += 1){
        if (forsaken_choose[i].character_num == 84){
            printf("Error: index out of range -> forsaken_choose");
            return 84;
        }
    }
    printf("Character choosed: %s\n", forsaken_choose[i].character);
    return 0;
}