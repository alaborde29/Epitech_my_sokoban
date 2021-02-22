/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday04-alexandre.laborde
** File description:
** my_putstr
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n++;
    }
    return (0);
}