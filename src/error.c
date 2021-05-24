/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** error
*/

#include "my.h"
#include "sokoban.h"

int error(int ac, char **av)
{
    char *buffer = 0;
    buffer = read_file(av[1], buffer);

    if (buffer == 0) {
        my_putstr("read error\n");
        free(buffer);
        return (84);
    }
    if (verification(buffer) == -1) {
        my_putstr("verification error\n");
        free(buffer);
        return (84);
    }
    free(buffer);
    return (0);
}