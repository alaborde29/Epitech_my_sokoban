/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** my_sokoban
*/

#include "sokoban.h"
#include "my.h"
#include <ncurses.h>
#include <stdlib.h>

void my_sokoban(char *map_path)
{
    char **map_tab = setup(map_path);
    WINDOW *win;

    my_show_word_array(map_tab);
    initscr();
    while (1) {
        print_game(map_tab);
        refresh();
        if (getch() == ' ')
            break;
    }
    endwin();
    free (win);
    return;

}