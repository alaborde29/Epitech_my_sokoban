/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** verification
*/

#include "my.h"
#include "sokoban.h"

int verification(char *str)
{
    if (are_caracthers_allowed(str) == -1)
        return (-1);
    if (is_there_multiple_player(str) == -1)
        return (-1);
    if (is_same_amount_of_x_and_o(str) == -1)
        return (-1);
    return (0);
}

int are_caracthers_allowed(char *str)
{
    int i = 0;

    while (str[i] == '\0') {
        switch (str[i]) {
            case '#':
                i++;
            case 'O':
                i++;
            case 'P':
                i++;
            case ' ':
                i++;
            case 'X':
                i++;
            case '\n':
                i++;
            default :
                return (-1);
        }
    }
}

int is_there_multiple_player(char *str)
{
    int n = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'P')
            n++;
    }
    if (n != 1)
        return (-1);
    return (0);
}

int is_same_amount_of_x_and_o(char *str)
{
    int n_x = 0;
    int n_o = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'O')
            n_o++;
        if (str[i] == 'X')
            n_x++;
    }
    if (n_o != n_x)
        return (-1);
    return (0);
}