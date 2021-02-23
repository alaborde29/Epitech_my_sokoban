/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

typedef struct s_vector2x
{
    int x;
    int y;
}t_vector2x;

void usage(void);
int error(int ac, char **av);
char *read_file(char *path, char *buffer);
int verification(char *str);
char **setup(char *map_path);
char **split_lines(char *str, int tab_size);
int how_many_line_in_str(char *str);
int how_many_line_in_tab(char **tab);
void print_game(char **map);
void my_sokoban(char *map_path);

#endif /* !SOKOBAN_H_ */
