/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** push_up
*/

#include "my.h"
#include "sokoban.h"

void move_player_u(game_info_t *game_info)
{
    if (game_info->is_p_pos_o == 1) {
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x] = 'O';
        game_info->is_p_pos_o = 0;
    }
    else {
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x] = ' ';
    }
    game_info->map_tab[game_info->player_pose->y + 1]\
    [game_info->player_pose->x] = 'P';
}

void blanck_space_pu(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y + 2]\
    [game_info->player_pose->x] == ' ') {
        game_info->map_tab[game_info->player_pose->y + 1]\
        [game_info->player_pose->x] = ' ';
        game_info->map_tab[game_info->player_pose->y + 2]\
        [game_info->player_pose->x] = 'X';
        move_player_u(game_info);
    }
}

void go_to_o_pu(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y + 2]\
    [game_info->player_pose->x] == 'O') {
        if (game_info->is_p_pos_o == 1) {
            game_info->map_tab[game_info->player_pose->y]\
            [game_info->player_pose->x] = 'O';
            game_info->is_p_pos_o = 0;
        }
        else
            game_info->map_tab[game_info->player_pose->y]\
            [game_info->player_pose->x] = ' ';
        game_info->map_tab[game_info->player_pose->y + 1]\
        [game_info->player_pose->x] = 'P';
        game_info->map_tab[game_info->player_pose->y + 2]\
        [game_info->player_pose->x] = 'X';
    }
}

void push_up(game_info_t *game_info)
{
    blanck_space_pu(game_info);
    go_to_o_pu(game_info);
}