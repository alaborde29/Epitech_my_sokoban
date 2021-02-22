/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday09-alexandre.laborde
** File description:
** my_compute_power_rec
*/

#include "my.h"

int my_compute_power_rec(int nb, int power)
{
    int res = nb;

    if (power == 0)
        return (1);
    if (power == 1)
        return (nb);
    if (power < 0)
        return (-1);
    while (power != 1) {
        res = res * nb;
        power--;
    }
    return (res);
}