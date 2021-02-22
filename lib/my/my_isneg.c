/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday03-alexandre.laborde
** File description:
** my_isneg.c
*/

#include <unistd.h>
#include "my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);
}