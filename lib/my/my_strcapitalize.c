/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday06-alexandre.laborde
** File description:
** my_strcapitalize
*/

char *my_strlowercase(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

char *my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowercase(str);
    while (str[i] != '\0') {
        if (i == 0 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
            i++;
        }
        if (i != 0 && str[i] == '+' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] = str[i + 1] - 32;
        if (i != 0 && str[i] == '-' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] = str[i + 1] - 32;
        if (i != 0 && str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
            str[i + 1] = str[i + 1] - 32;
        i++;
    }
    return (str);
}