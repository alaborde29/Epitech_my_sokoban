/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday06-alexandre.laborde
** File description:
** my_str_isalpha
*/

int my_str_isalpha(char const *str)
{
    int error = 0;

    if (str[0] == '\0')
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'b')
            error++;
        else
            error = 0;
        if (str[i] < 'A' || str[i] > 'Z')
            error++;
        else
            error = 0;
        if (error == 2)
            return (0);
    }
    return (1);
}