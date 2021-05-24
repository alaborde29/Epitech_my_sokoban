/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** print_game
*/

#include "sokoban.h"
#include "my.h"
#include <ncurses.h>

void print_game(char **map)
{
    int i = 0;

    while (map[i]) {
        mvprintw(i + (LINES / 3.5), \
        (COLS / 2) - my_strlen(map[i]), map[i]);
        i++;
    }
}