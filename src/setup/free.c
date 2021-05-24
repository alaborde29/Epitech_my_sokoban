/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** free
*/

#include "my.h"
#include "sokoban.h"
#include <stdlib.h>

void free_split_line(char **dbl)
{
    int i = 0;

    while (dbl[i]) {
        free(dbl[i]);
        i++;
    }
    free(dbl);
}

void free_split_vect(vector2x_t **dbl)
{
    int i = 0;

    while (dbl[i]) {
        free(dbl[i]);
        i++;
    }
    free(dbl);
}

void free_struct(game_info_t *game_info)
{
    free_split_line(game_info->map_tab);
    free(game_info->player_pose);
    free(game_info->crate_pos);
    free(game_info->goal_pos);
    free(game_info);
    return ;
}