##
## EPITECH PROJECT, 2020
## B-CPE-100-NAN-1-1-cpoolday10-alexandre.laborde
## File description:
## Makefile
##

SRC		=	src/my_popup.c			\
			src/usage.c 			\
			src/error.c 			\
			src/utilities.c 		\
			src/verification.c		\
			src/main.c

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