/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** setup
*/

#include "my.h"
#include "sokoban.h"

game_info_t *setup(char *map_path)
{
    game_info_t *game_info = malloc(sizeof(game_info_t));
    char *map_str = read_file(map_path, map_str);

    game_info->map_tab = split_lines\
    (map_str, how_many_line_in_str(map_str) + 1);
    game_info->game_statut = 0;
    game_info->player_pose = malloc(sizeof(vector2x_t));
    find_player_pos(game_info);
    game_info->is_p_pos_o = 0;

    return (game_info);
}