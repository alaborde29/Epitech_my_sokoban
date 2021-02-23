/*
** EPITECH PROJECT, 2020
** B-CPE-101-NAN-1-1-infinadd-alexandre.laborde
** File description:
** main
*/

#include "my.h"
#include "sokoban.h"

int main(int ac, char **av)
{
    if (ac != 2) {
        my_putstr("not enough args\n");
        return (84);
    }
    if (ac == 2 && my_strcmp("-h", av[1]) == 0) {
        usage();
        return (0);
    }
    if (error(ac, av))
        return (84);
    my_sokoban(av[1]);
    return (0);
}