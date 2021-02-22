/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday09-alexandre.laborde
** File description:
** my_getnbr
*/

#include "my.h"

int my_num_size(char const *str)
{
    int i = 0;
    int size = 0;

    while ((str[i] < '0' || str[i] > '9') && str[i] != '\0') {
        i++;
    }
    if (str[i] == '\0')
        return (-1);
    while (str[i] >= '0' && str[i] <= '9') {
        size++;
        i++;
    }
    return (size);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    int nb = 0;
    int num_size = my_num_size(str);

    if (str[0] == '\0')
        return (0);
    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign = sign * (-1);
        i++;
    }
    if (str[i] < '0' || str[i] > '9')
        return (0);
    while (str[i] >= '0' && str[i] <= '9') {
        nb = nb + ((str[i] - '0') * (my_compute_power_rec(10, num_size - 1)));
        num_size--;
        i++;
    }
    return (nb * sign);
}
