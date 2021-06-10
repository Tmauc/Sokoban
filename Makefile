##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	src/main.c	\
		src/game.c	\
		src/setup.c	\
		src/windows.c	\
		src/handleInput.c	\
		src/checkPosition.c	\
		src/playerMove.c	\
		src/checkcasemove.c	\
		src/playerMove2.c	\
		src/restart.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/help.c	\
		src/lose.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CPPFLAGS=	-I include

CFLAGS	=	-Wextra -Wall -Werror -g3

LDFLAGS	=	-lncurses

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
