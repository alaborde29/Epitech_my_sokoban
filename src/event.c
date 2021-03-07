/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** event
*/

#include "my.h"
#include "sokoban.h"

int handle_event(game_info_t *game_info)
{
    int catch = getch();

    if (catch == ' ')
        game_info->game_statut = 1;
    if (catch == KEY_UP)
        move_char_up(game_info);
    if (catch == KEY_DOWN)
        move_char_down(game_info);
    if (catch == KEY_LEFT)
        move_char_left(game_info);
    if (catch == KEY_RIGHT)
        move_char_right(game_info);
    if (catch == 410)
        clear();
    find_player_pos(game_info);
    my_putstr("end of event\n");
    return (0);
}