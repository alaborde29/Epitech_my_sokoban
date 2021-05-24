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
#include <stdio.h>

int are_vector_the_same(vector2x_t v1, vector2x_t v2)
{
    if (v1.x == v2.x && v1.y == v2.y)
        return (0);
    return (-1);
}

int is_game_finished(game_info_t *game_info)
{
    int i = 0;
    int j = 0;
    int n = 0;

    while (i != game_info->crate_n) {
        if (are_vector_the_same(game_info->goal_pos[i], \
        game_info->crate_pos[j]) == 0)
            n++;
        if (j == game_info->crate_n) {
            j = 0;
            i++;
        }
        j++;
    }
    if (n == game_info->crate_n) {
        my_putchar('A');
        return (1);
    }
    return (0);
}

void my_sokoban(char *map_path)
{
    game_info_t *game_info = setup(map_path);
    int exit = 0;

    initscr();
    noecho();
    keypad(stdscr, TRUE);
    while (exit != 1) {
        print_game(game_info->map_tab);
        refresh();
        handle_event(game_info);
        if (game_info->game_statut == 1)
            break;
        game_info->crate_pos = get_symbol_pos('X', \
        game_info->map_str, game_info->map_tab);
        exit = is_game_finished(game_info);
    }
    free_struct(game_info);
    endwin();
    return;
}