/*
** EPITECH PROJECT, 2017
** move
** File description:
** 
*/

#include "my.h"

void playerMove(int y, int x, Player * user, int perm)
{
	if (user->stock == 1) {
		user->stock = 0;
		mvprintw(user->position.y, user->position.x, "O");
	} else if (perm == 1) {
		user->stock = 1;
		mvprintw(user->position.y, user->position.x, " ");
	} else
		mvprintw(user->position.y, user->position.x, " ");
	user->position.y = y;
	user->position.x = x;
	mvprintw(user->position.y, user->position.x, "P");
	refresh();
}
