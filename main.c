#include <SFML/Graphics/Color.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Window/Window.h>
#include <stdio.h>
#include "include/rchar.h"
#include "my.h"

static void event(sfRenderWindow *window)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(window, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(window);
    }
}

static void display(sfRenderWindow *window)
{
    sfRenderWindow_display(window);
}

static void update(void)
{

}

static void make_window(sfRenderWindow *window)
{
    while(sfRenderWindow_isOpen(window)){
        event(window);
        display(window);
        update();
    }
    sfRenderWindow_destroy(window);
}

static int check_errs(sfRenderWindow *window, char **env)
{
    int i = 0;
    int check = 84;
    if (window == NULL){
        printf("Error: window -> init\n");
        return 84;
    }
    while (env[i] != NULL){
        if (check == 0)
        i += 1;
    }
    if (check != 0){
        printf("fatal error env -> var display not found !\n");
        printf("if you don't know what is happening, your pc may have a serious problem\n");
        return 84;
    }
    return 0;
}

int main(int argc, char *const *argv, char** env)
{
    char *str = forsaken_character();
    sfRenderWindow *window;

    window = windows_init(window, 1920, 1080);
    if (check_errs(window, env) == 84)
        return 84;
    make_window(window);
    return 0;
}