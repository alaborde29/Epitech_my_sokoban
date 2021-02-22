/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday06-alexandre.laborde
** File description:
** my_str_islower
*/

int my_str_islower(char const *str)
{
    if (str[0] == '\0')
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z')
            return (0);
    }
    return (1);
}