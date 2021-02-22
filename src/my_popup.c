/*
** EPITECH PROJECT, 2021
** bssokoban
** File description:
** my_popup
*/

#include <ncurses.h>
#include <stdlib.h>
#include "my.h"
#include "sokoban.h"

int my_popup(char *str)
{
    WINDOW *win;
    int str_size = my_strlen(str);
    int temp = 0;

    initscr();
    while (1) {
        mvprintw(LINES / 2, (COLS / 2) - str_size, str);
        refresh();
        if (getch() != 410) {
            temp = getch();
            mvprintw(24, 0, "Charcter pressed is = %3d Hopefully it can be printed as '%c'", temp, temp);
            refresh();
            break; }
    }
    endwin();
    free (win);
    return (0);
}