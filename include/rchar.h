#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Window.h>

#ifndef _RCHAR_H
    #define _RCHAR_H
    typedef struct {
        int character_num;
        char *character;
    } forsaken_t;
    char *forsaken_character(void);
    sfRenderWindow *windows_init(sfRenderWindow *window, int x, int y);
#endif