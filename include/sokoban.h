/*
** EPITECH PROJECT, 2021
** sokoban
** File description:
** sokoban
*/

#include "my.h"
#include <ncurses.h>
#include <stdlib.h>

#ifndef SOKOBAN_H_
#define SOKOBAN_H_

typedef struct vector2x_s
{
    int x;
    int y;
}vector2x_t;

typedef struct game_info_s
{
    char **map_tab;
    char *map_path;
    char *map_str;
    int game_statut;
    vector2x_t *player_pose;
    vector2x_t *crate_pos;
    int crate_n;
    vector2x_t *goal_pos;
    int goal_n;
    WINDOW *win;
    int is_p_pos_o;
    vector2x_t **all_box_pos;
    vector2x_t **all_storage_pos;
    int num_of_box;
}game_info_t;

void usage(void);
int error(int ac, char **av);
char *read_file(char *path, char *buffer);
int verification(char *str);
game_info_t *setup(char *map_path);
char **split_lines(char *str, int tab_size);
int how_many_line_in_str(char *str);
int how_many_line_in_tab(char **tab);
void print_game(char **map);
void my_sokoban(char *map_path);
int handle_event(game_info_t *game_info);
void find_player_pos(game_info_t *game_info);
void move_char_down(game_info_t *game_info);
void move_char_up(game_info_t *game_info);
void move_char_left(game_info_t *game_info);
void move_char_right(game_info_t *game_info);
void push_up(game_info_t *game_info);
void push_down(game_info_t *game_info);
void push_left(game_info_t *game_info);
void push_right(game_info_t *game_info);
int is_game_won(game_info_t *game_info);
void reset_game(game_info_t *game_info);
void setup_pos_tab(game_info_t *game_info);
vector2x_t *get_symbol_pos(char c, char *map_str, char **map_tab);
int count_char_occ(char c, char *str);
void free_struct(game_info_t *game_info);
int are_vector_the_same(vector2x_t v1, vector2x_t v2);

#endif /* !SOKOBAN_H_ */
