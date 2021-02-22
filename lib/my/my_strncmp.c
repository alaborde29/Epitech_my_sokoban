/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday06-alexandre.laborde
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a = 0;
    int b = 0;

    while (s1[a] != '\0' || a != n)
        a++;
    while (s2[b] != '\0' || b != n)
        b++;
    return (a - b);
}