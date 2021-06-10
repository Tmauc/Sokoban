/*
** EPITECH PROJECT, 2017
** checkcasemove
** File description:
** 
*/

#include "my.h"

void casemove2(int caseY, int caseX)
{
	mvprintw(caseY, caseX, "X");
}

void casemove(int caseY, int caseX)
{
	mvprintw(caseY, caseX, "X");
}

int checkcasemove(int direction, Player *user, int newY, int newX)
{
	int caseY;
	int caseX;
	int loss = 0;

	if (direction == 1) {
		caseY = user->position.y - 2;
		caseX = user->position.x;
	}
	if (direction == 2) {
		caseY = user->position.y + 2;
		caseX = user->position.x;
	}
	if (direction == 3) {
		caseY = user->position.y;
		caseX = user->position.x + 2;
	} else if (direction == 4) {
		caseY = user->position.y;
		caseX = user->position.x - 2;
	}
	switch (mvinch(caseY, caseX)) {
	case ' ':
		playerMove2(newY, newX, user);
		casemove(caseY, caseX);
		loss = lose(direction, user);
		break;
	case 'O':
		user->score = user->score - 1;
		playerMove2(newY, newX, user);
		casemove2(caseY, caseX);
	default:
		break;
	}
	return (loss);
}
