/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** sokoban
*/

#ifndef SOKOBAN_H_
#define SOKOBAN_H_
void usage(void);
int error(int ac, char **av);
int my_popup(char *str);
char *read_file(char *path, char *buffer);
int verification(char *str);
char **setup(char *str);

#endif /* !SOKOBAN_H_ */
