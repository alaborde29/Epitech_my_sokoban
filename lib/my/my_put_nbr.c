/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday08-alexandre.laborde
** File description:
** my_put_nbr
*/

#include "my.h"

int do_print(int size_str, int nb, int mod)
{
    for (int i = 0; i != size_str; i++) {
        my_putchar((nb / mod) + '0');
        nb = nb - (nb / mod) * mod;
        mod = mod / 10;
    }
    return (0);
}

int my_put_nbr(int nb)
{
    int size_str = 0;
    int mod = 1;

    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb > 2147483647 || nb < -2147483647)
        return (0);
    if (nb < 0) {
        my_putchar('-');
        nb = nb * - 1;
    }
    while (nb / mod != 0) {
        size_str++;
        mod = mod * 10;
    }
    mod = mod / 10;
    do_print(size_str, nb, mod);
    return (0);
}