/*
** EPITECH PROJECT, 2017
** check
** File description:
** 
*/

#include "my.h"

int checkPosition(int newY, int newX, Player *user, int direction)
{
	int perm = 0;
	int loss = 0;

	switch (mvinch(newY, newX)) {
	case ' ':
		playerMove(newY, newX, user, perm);
		break;
	case 'O':
		perm = 1;
		playerMove(newY, newX, user, perm);
		break;
	case 'X':
		loss = checkcasemove(direction, user, newY, newX);
		move(user->position.y, user->position.x);
		break;
	case '#':
		move(user->position.y, user->position.x);
		break;
	default:
		move(user->position.y, user->position.x);
		break;
	}
	return (loss);
}
