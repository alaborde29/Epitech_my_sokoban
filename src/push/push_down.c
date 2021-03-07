/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** push_down
*/

#include "my.h"
#include "sokoban.h"

void move_player_d(game_info_t *game_info)
{
    if (game_info->is_p_pos_o == 1) {
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x] = 'O';
    }
    else {
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x] = ' ';
    }
    game_info->map_tab[game_info->player_pose->y - 1]\
    [game_info->player_pose->x] = 'P';
}

void blanck_space_pd(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y - 2]\
    [game_info->player_pose->x] == ' ') {
        game_info->map_tab[game_info->player_pose->y - 1]\
        [game_info->player_pose->x] = ' ';
        game_info->map_tab[game_info->player_pose->y - 2]\
        [game_info->player_pose->x] = 'X';
        move_player_d(game_info);
    }
}

void go_to_o_pd(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y - 2]\
    [game_info->player_pose->x] == 'O') {
        if (game_info->is_p_pos_o == 1) {
            game_info->map_tab[game_info->player_pose->y - 1]\
            [game_info->player_pose->x] = 'O';
            game_info->is_p_pos_o = 0;
        }
        else
            game_info->map_tab[game_info->player_pose->y - 1]\
            [game_info->player_pose->x] = ' ';
        game_info->map_tab[game_info->player_pose->y - 2]\
        [game_info->player_pose->x] = 'X';
        game_info->is_p_pos_o = 1;
    }
}

void push_down(game_info_t *game_info)
{
    blanck_space_pd(game_info);
    //go_to_o_pd(game_info);

}