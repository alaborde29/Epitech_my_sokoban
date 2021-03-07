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
    game_info_t *game_info = setup(map_path);

    my_show_word_array(game_info->map_tab);
    initscr();
    noecho();
    while (1) {
        print_game(game_info->map_tab);
        refresh();
        handle_event(game_info);
        if (game_info->game_statut == 1)
            break;
    }
    endwin();
    return;
}