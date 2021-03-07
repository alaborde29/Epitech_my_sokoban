/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** push_right
*/

#include "my.h"
#include "sokoban.h"

void move_player_r(game_info_t *game_info)
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
    game_info->map_tab[game_info->player_pose->y]\
    [game_info->player_pose->x - 1] = 'P';
}

void blanck_space_pr(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y]\
    [game_info->player_pose->x + 2] == ' ') {
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x + 1] = ' ';
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x + 2] = 'X';
        move_player_r(game_info);
    }
}

void go_to_o_pr(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y]\
    [game_info->player_pose->x + 2] == 'O') {
        if (game_info->is_p_pos_o == 1) {
            game_info->map_tab[game_info->player_pose->y]\
            [game_info->player_pose->x] = 'O';
            game_info->is_p_pos_o = 0;
        }
        else
            game_info->map_tab[game_info->player_pose->y]\
            [game_info->player_pose->x] = ' ';
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x + 1] = 'P';
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x + 2] = 'X';
    }
}

void push_right(game_info_t *game_info)
{
    blanck_space_pr(game_info);
    go_to_o_pr(game_info);
}