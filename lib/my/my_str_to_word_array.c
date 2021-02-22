/*
** EPITECH PROJECT, 2020
** B-CPE-100-NAN-1-1-cpoolday08-alexandre.laborde
** File description:
** my_str_to_word_array
*/

#include "my.h"
#include <stdlib.h>

int count_str_words(char const *s)
{
    int i = 0;
    int word = 0;

    while (s[i] != '\0') {
        if (is_alphanum(s[i]) == 0 && i == 0 ) {
            word++;
            i++;
        }
        if (is_alphanum(s[i - 1]) == 1 && is_alphanum(s[i]) == 0) {
            word++;
            i++;
        }
        else
            i++;
    }
    return (word);
}

int *size_of_each_word(char const *s, int word)
{
    int *word_size = malloc(sizeof(int) * (word + 1));
    int i = 0;
    int size = 0;
    int n = 0;
    int temp = 0;

    while (n != count_str_words(s)) {
        while (is_alphanum(s[i]) == 0) {
            size++;
            i++;
        }
        if (is_alphanum(s[i - 1]) == 0 && is_alphanum(s[i]) == 1) {
            word_size[n] = size;
            size = 0;
            n++;
        }
        i++;
    }
    word_size[n] = 1;
    return (word_size);
}

char **alloc_tab(char **tab, char const *str)
{
    int word = count_str_words(str);
    int *word_size = size_of_each_word(str, word);
    int i = 0;
    int j = 0;

    tab = malloc(sizeof(char *) * (word + 1));
    while (i != word + 1) {
        tab[i] = malloc(sizeof(char) * (word_size[i]) + 1);
        i++;
    }
    free(word_size);
    return (tab);
}

char **my_str_to_word_array(char const *str)
{
    char **tab = alloc_tab(tab, str);
    int i = 0;
    int j = 0;
    int *word_size = size_of_each_word(str, count_str_words(str));

    for (int n = 0; n < my_strlen(str);) {
        if (is_alphanum(str[n]) == 0) {
            tab[i][j] = str[n];
            j++;
            n++;
        }
        if (j == word_size[i]) {
            j = 0;
            i++;
            n++; }
        if (is_alphanum(str[n]) == 1)
            n++;
    }
    tab[count_str_words(str)] = 0;
    return (tab);
}
