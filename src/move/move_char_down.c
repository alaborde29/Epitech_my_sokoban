/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** move_char_down
*/

#include "my.h"
#include "sokoban.h"

void blanck_space_d(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y - 1]\
    [game_info->player_pose->x] == ' ') {
        if (game_info->is_p_pos_o == 1) {
            game_info->map_tab[game_info->player_pose->y]\
            [game_info->player_pose->x] = 'O';
            game_info->is_p_pos_o = 0;
        }
        else
            game_info->map_tab[game_info->player_pose->y]\
            [game_info->player_pose->x] = ' ';
        game_info->map_tab[game_info->player_pose->y - 1]\
        [game_info->player_pose->x] = 'P';
    }
}

void go_to_o_d(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y - 1]\
    [game_info->player_pose->x] == 'O') {
        if (game_info->is_p_pos_o == 1) {
            game_info->map_tab[game_info->player_pose->y]\
            [game_info->player_pose->x] = 'O';
            game_info->is_p_pos_o = 0;
        }
        else
            game_info->map_tab[game_info->player_pose->y]\
            [game_info->player_pose->x] = ' ';
        game_info->map_tab[game_info->player_pose->y - 1]\
        [game_info->player_pose->x] = 'P';
        game_info->is_p_pos_o = 1;
    }
}

void move_a_block_d(game_info_t *game_info)
{
    if (game_info->map_tab[game_info->player_pose->y - 1]\
    [game_info->player_pose->x] == 'X') {
        push_down(game_info);
    }
    return ;
}

void move_char_down(game_info_t *game_info)
{
    int put_o = 0;
    int i = 0;

    while (i != game_info->crate_n) {
        if (are_vector_the_same(game_info->player_pose[0], \
        game_info->goal_pos[i]) == 0)
            put_o = 1;
        i++;
    }
    blanck_space_d(game_info);
    go_to_o_d(game_info);
    move_a_block_d(game_info);
    if (put_o == 1)
        game_info->map_tab[game_info->player_pose->y]\
        [game_info->player_pose->x] = 'O';
}