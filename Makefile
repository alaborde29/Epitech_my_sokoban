##
## EPITECH PROJECT, 2020
## B-CPE-100-NAN-1-1-cpoolday10-alexandre.laborde
## File description:
## Makefile
##

SRC		=	src/error.c				\
			src/main.c 				\
			src/my_sokoban.c 		\
			src/print_game.c 		\
			src/setup.c				\
			src/usage.c				\
			src/utilities.c			\
			src/verification.c		\

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