##
## EPITECH PROJECT, 2020
## B-CPE-100-NAN-1-1-cpoolday10-alexandre.laborde
## File description:
## Makefile
##

SRC		=	src/error.c						\
			src/event.c						\
			src/main.c 						\
			src/my_sokoban.c 				\
			src/print_game.c 				\
			src/setup/setup.c				\
			src/setup/setup_utilities.c		\
			src/usage.c						\
			src/utilities.c					\
			src/verification.c				\
			src/move/move_char_up.c			\
			src/move/move_char_down.c		\
			src/move/move_char_left.c		\
			src/move/move_char_right.c		\
			src/push/push_up.c				\
			src/push/push_down.c			\
			src/push/push_left.c			\
			src/push/push_right.c			\
			src/analyze.c					\
			src/setup/free.c				\

OBJ		=	$(SRC: .c=.o)

NAME	= 	my_sokoban

all: 		$(NAME)

$(NAME):	$(OBJ)
			make -C lib/my
			gcc -g -o $(NAME) $(OBJ) -lncurses -Llib -lmy -Iinclude

clean:
		rm -f *.o

fclean: clean
		rm -f $(NAME)
		make fclean -C lib/my

re:		fclean all