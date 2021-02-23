/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** setup
*/

#include "my.h"
#include "sokoban.h"

char **setup(char *map_path)
{
    char *map_str = read_file(map_path, map_str);
    char **map_tab = split_lines(map_str, how_many_line_in_str(map_str) + 1);

    return (map_tab);
}