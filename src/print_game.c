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
        mvprintw((LINES / 2) + i - (how_many_line_in_tab(map) / 2), (COLS / 2) - my_strlen(map[i]), map[i]);
        i++;
    }
}