/*
** EPITECH PROJECT, 2021
** my
** File description:
** my_swap_str
*/

#include <stdlib.h>

void switch_two_words(char *str1, char *str2)
{
    char *temp = malloc(sizeof(*str1));

    *temp = *str1;
    *str1 = *str2;
    *str2 = *temp;
}