/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** verification
*/

#include "my.h"
#include "sokoban.h"

int is_char_in_the_str(char *str, char c)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == c)
            return (0);
        i++;
    }
    my_putchar(c);
    return (-1);
}

int are_caracthers_allowed(char *str)
{
    char *characters = "#OP X\n";

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_char_in_the_str(characters, str[i]) != 0)
            return (-1);
    }
    return (0);
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

int verification(char *str)
{
    if (are_caracthers_allowed(str) == -1) {
        my_putstr("unallowed character\n");
        return (-1);
    }
    if (is_there_multiple_player(str) == -1) {
        my_putstr("too much of the same character\n");
        return (-1);
    }
    if (is_same_amount_of_x_and_o(str) == -1) {
        my_putstr("O and X amount doesn't match\n");
        return (-1);
    }
    return (0);
}