#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Window.h>

sfRenderWindow *windows_init(sfRenderWindow *window, int x, int y)
{
    sfVideoMode mode = {x, y};

    window = sfRenderWindow_create(mode, "Choose your character", sfClose || sfResize, NULL);
    if (window == NULL)
        return NULL;
    return window;
}