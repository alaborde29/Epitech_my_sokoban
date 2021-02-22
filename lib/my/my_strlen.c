/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday04-alexandre.laborde
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int n = 0;

    while (str[n] != '\0')
        n++;
    return (n);
}