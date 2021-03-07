/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** setup
*/

#include "my.h"
#include "sokoban.h"

int count_box_in_str(char *str)
{
    int n = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'X')
            n++;
    }
    return (n);
}

void count_box_num(game_info_t *game_info)
{
    int n = 0;

    for (int i = 0; game_info->map_tab[i] != 0; i++)
        n = n + count_box_in_str(game_info->map_tab[i]);
    game_info->num_of_box = n;
}

void setup_pos_tab(game_info_t *game_info)
{
    vector2x_t **tab1 = malloc(sizeof(vector2x_t *) * game_info->num_of_box);
    vector2x_t **tab2 = malloc(sizeof(vector2x_t *) * game_info->num_of_box);

    for (int i = 0; i != game_info->num_of_box; i++) {
        tab1[i] = malloc(sizeof(vector2x_t));
        tab2[i] = malloc(sizeof(vector2x_t));
    }
    for (int j = 0; j != game_info->num_of_box; j++) {
        tab1[j]->x = 0;
        tab1[j]->y = 0;
        tab2[j]->x = 0;
        tab2[j]->y = 0;
    }
    game_info->all_box_pos = tab1;
    game_info->all_storage_pos = tab2;
}

void reset_game(game_info_t *game_info)
{
    char *map_str = read_file(game_info->map_path, map_str);
    game_info->map_tab = split_lines\
    (map_str, how_many_line_in_str(map_str) + 1);
    find_player_pos(game_info);
    game_info->is_p_pos_o = 0;
}

game_info_t *setup(char *map_path)
{
    game_info_t *game_info = malloc(sizeof(game_info_t));
    char *map_str = read_file(map_path, map_str);

    game_info->map_path = map_path;
    game_info->map_tab = split_lines\
    (map_str, how_many_line_in_str(map_str) + 1);
    game_info->game_statut = 0;
    game_info->player_pose = malloc(sizeof(vector2x_t));
    find_player_pos(game_info);
    game_info->is_p_pos_o = 0;

    return (game_info);
}