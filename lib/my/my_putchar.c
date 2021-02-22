/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday06-alexandre.laborde
** File description:
** my_putchar
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}