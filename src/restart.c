/*
** EPITECH PROJECT, 2017
** restart
** File description:
** 
*/

#include "my.h"

int clean()
{
	getch();
	endwin();
	return(1);
}

void restart(Player *user, char **av)
{
	clean();
	av[1] = av[1] + 0;
	user =(Player*)user;
	user->position.x = user->posbas.x;
	user->position.y = user->posbas.y;
	mapSetUp(av);
	game(user, av);
}
