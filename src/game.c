/*
** EPITECH PROJECT, 2017
** game
** File description:
** 
*/

#include "my.h"

int game(Player *user, char **av)
{
	int ch;
	int restartt = 0;
	int loss = 0;

	while ((ch = getch()) != 'a' && restartt == 0 && user->score != 0 && loss != 1) {
		if (ch == ' ')
			restartt = 1;
		else
			loss = handleInput(ch, user);
	}
	if (restartt == 1)
		restart(user, av);
	else if (loss == 1) {
		getch();
		endwin();
		return (1);
	} else {
		getch();
		endwin();
		return (0);
	}
	return (0);
}
