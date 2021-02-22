/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday07-alexandre.laborde
** File description:
** my_strncat
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_strlen(dest);
    int j = 0;

    while (j != nb) {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}