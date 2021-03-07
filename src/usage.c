/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** usage
*/

#include "my.h"

void usage()
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap file representating the warehouse map, ");
    my_putstr("containint '#' for walls,\n\t'P' for the ");
    my_putstr("player, 'X' for boxes and 'O' for storage locations.\n");
    my_putstr("COMMANDS\n");
    my_putstr("\t'R' is for reset\n");
    my_putstr("\t'SPACEBAR' is for quit\n");
    my_putstr("\t'ARROW KEYS' ar for movement\n");
}