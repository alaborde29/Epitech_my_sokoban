/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** setup_uilities
*/

#include "my.h"
#include "sokoban.h"
#include <stdio.h>

int count_char_occ(char c, char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            n++;
        i++;
    }
    return (n);
}

int get_symbol_pos_in_line(char c, char *str, vector2x_t *vect_tab, \
vector2x_t jy)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] == c) {
            vect_tab[jy.x] = (vector2x_t){x, jy.y};
            jy.x++;
        }
        x++;
    }
    return (jy.x);
}

vector2x_t *get_symbol_pos(char c, char *map_str, char **map_tab)
{
    int char_occ = count_char_occ(c, map_str);
    vector2x_t *symbol_pos = malloc(sizeof(vector2x_t) * (char_occ + 1));
    int j = 0;

    for (int i = 0; map_tab[i] != 0; i++)
        j = get_symbol_pos_in_line(c, map_tab[i], symbol_pos, \
        (vector2x_t){j, i});
    return (symbol_pos);
}