/*
** EPITECH PROJECT, 2020
** B-CEP-110-NAN-1-1-bspushswap-alexandre.laborde
** File description:
** copy_int_array
*/

#include "my.h"

int *copy_int_array(int *src, int *dest, int size)
{
    int i = 0;

    while (i != size) {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}