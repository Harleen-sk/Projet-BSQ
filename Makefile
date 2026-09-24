##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC	=	src/my_putchar.c	\
		src/cols.c	\
		src/row.c	\
		src/double_tableau.c	\
		src/char_to_int.c	\
		src/my_put_nbr.c	\
		src/algo.c	\
		src/error_handling.c	\
		src/square_position.c	\
		src/display.c	\
		src/main.c	\
		src/open_file.c	\
		src/my_getnbr.c	\

CFLAGS	=	-Wall -Wextra

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g3 -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re:	fclean all
