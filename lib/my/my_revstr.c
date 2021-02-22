/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday06-alexandre.laborde
** File description:
** my_revstr
*/

char *my_revstr(char *str)
{
    int j = 0;
    int size = 0;
    char temp;

    while (str[j] != '\0') {
        size++;
        j++;
    }
    for (int i = 0; i != size / 2; i++) {
        j--;
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return (str);
}