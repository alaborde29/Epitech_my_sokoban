/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday04-alexandre.laborde
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
    return;
}