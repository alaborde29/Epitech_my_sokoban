/*
** EPITECH PROJECT, 2021
** B-PSU-200-NAN-2-1-mysokoban-alexandre.laborde
** File description:
** utilities
*/

#include "sokoban.h"
#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

char *read_file(char *path, char *buffer)
{
    struct stat file_info;
    int st_return = stat(path, &file_info);
    int fd = open(path, O_RDONLY);
    buffer = malloc(sizeof(char) * file_info.st_size);
    int rd_return = read(fd, buffer, file_info.st_size);

    if (st_return || fd == -1 || rd_return == -1)
        return (NULL);
    else
        return (buffer);
}

int how_many_line_in_str(char *str)
{
    int n = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            n++;
    }
    return (n);
}

char **split_lines(char *str, int tab_size)
{
    char **tab = malloc(sizeof(char *) * tab_size);
    int n = 0;
    int o = 0;
    int j = 0;
    int malloc_size = 0;

    for (int i = 0; i != tab_size - 1; i++, n++, o++) {
        while (str[o] != '\n' && str[o] != '\0') {
            o++;
            malloc_size++;
        }
        tab[i] = malloc(sizeof(char) * o);
        for (; str[n] != '\n' && str[n] != '\0'; j++, n++){
            tab[i][j] = str[n];}
        tab[i][j] = '\0';
        j = 0;
    }
    tab[tab_size] = 0;
    return (tab);
}