/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** analyze
*/

#include "my.h"
#include "sokoban.h"

void find_box_pos_in_str(game_info_t *game_info)
{
        return ;
}

void get_all_box_pos(game_info_t *game_info)
{
    int n = 0;

    for (int i = 0; game_info->map_tab[i]; i++) {
        for (int j = 0; game_info->map_tab[i][j]; j++) {
            if (game_info->map_tab[i][j] == 'X') {
                game_info->all_box_pos[n]->x = j;
                game_info->all_box_pos[n]->y = i;
                n++;
            }
        }
    }
}

void find_storage_pos_in_str(game_info_t *game_info)
{
    return ;
}

void get_all_storage_pos(game_info_t *game_info)
{
    int n = 0;

    for (int i = 0; game_info->map_tab[i]; i++) {
        for (int j = 0; game_info->map_tab[i][j]; j++) {
            if (game_info->map_tab[i][j] == 'O') {
                game_info->all_storage_pos[n]->x = j;
                game_info->all_storage_pos[n]->y = i;
                n++;
            }
        }
    }
}

int is_game_won(game_info_t *game_info)
{
    get_all_box_pos(game_info);
    get_all_storage_pos(game_info);
    for (int i = 0; i != game_info->num_of_box; i++) {
        if (game_info->all_box_pos[i]->x != game_info->all_storage_pos[i]->x \
        && game_info->all_box_pos[i]->y != game_info->all_storage_pos[i]->y)
            return (-1);
    }
    return (0);
}