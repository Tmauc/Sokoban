/*
** EPITECH PROJECT, 2017
** playerMove2
** File description:
** 
*/

#include "my.h"

void playerMove2(int y, int x, Player * user)
{
	if (user->stock == 1) {
		mvprintw(user->position.y, user->position.x, "O");
		user->stock = 0;
	} else
		mvprintw(user->position.y, user->position.x, " ");
	user->position.y = y;
	user->position.x = x;
	mvprintw(user->position.y, user->position.x, "P");
	refresh();
}
