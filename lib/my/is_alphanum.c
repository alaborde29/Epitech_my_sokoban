/*
** EPITECH PROJECT, 2020
** B-CPE-101-NAN-1-1-evalexpr-louis.maestre
** File description:
** is_alphanum
*/

int is_alphanum(char c)
{
    if (c >= '0' && c <= '9')
        return (0);
    if (c >= 'a' && c <= 'z')
        return (0);
    if (c >= 'A' && c <= 'Z')
        return (0);
    return (1);
}