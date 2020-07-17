##
## EPITECH PROJECT, 2018
## CPE_BSQ_2018
## File description:
## Makefile
##

SRC	=	my_bsq.c	\
		my_putchar.c	\
		my_getnbr.c	\
		my_put_nbr.c	\
		my_2_file_bsq.c	\
		my_3_file_bsq.c	\
		my_strlen.c	\
		my_4_file_bsq.c	\
		my_5_file_bsq.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

CFLAGS	=	-g -g3 -ggdb -I ./include

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
