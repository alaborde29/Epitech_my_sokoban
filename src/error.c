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
    char *buffer = read_file(av[1], buffer);

    if (buffer == 0) {
        my_putstr("read error\n");
        return (84);
    }
    if (verification(buffer) == -1) {
        my_putstr("verification error\n");
        return (84);
    }
    return (0);
}