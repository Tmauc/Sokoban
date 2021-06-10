/*
** EPITECH PROJECT, 2017
** help
** File description:
** 
*/

#include "my.h"
int loosup(Player *user, int caseY, int caseX)
{
	int caseY2 = user->position.y - 1;
	int caseX2 = user->position.x + 1;
	int caseX3 = user->position.x - 1;

	switch (mvinch(caseY, caseX)) {
	case '#':
		if (mvinch(caseY2, caseX2) == '#')
			return(1);
		else if (mvinch(caseY2, caseX3) == '#')
			return(1);
		else
			return (0);
	default:
		return(0);
	}
}

int loosdown(Player *user, int caseY, int caseX)
{
	int caseY2 = user->position.y + 1;
	int caseX2 = user->position.x + 1;
	int caseX3 = user->position.x - 1;

	switch (mvinch(caseY, caseX)) {
	case '#':
		if (mvinch(caseY2, caseX2) == '#')
			return(1);
		else if (mvinch(caseY2, caseX3) == '#')
			return(1);
		else
			return (0);
	default:
		return(0);
        }
}

int loosright(Player *user, int caseY, int caseX)
{
	int caseY2 = user->position.y - 1;
	int caseY3 = user->position.y + 1;
	int caseX2 = user->position.x + 1;

	switch (mvinch(caseY, caseX)) {
	case '#':
		if (mvinch(caseY2, caseX2) == '#')
			return(1);
		else if (mvinch(caseY3, caseX2) == '#')
			return(1);
		else
			return (0);
	default:
		return(0);
	}
}

int loosleft(Player *user, int caseY, int caseX)
{
	int caseY2 = user->position.y - 1;
	int caseY3 = user->position.x + 1;
	int caseX2 = user->position.x - 1;

	switch (mvinch(caseY, caseX)) {
	case '#':
		if (mvinch(caseY2, caseX2) == '#')
			return(1);
		else if (mvinch(caseY3, caseX2) == '#')
			return(1);
		else
			return (0);
	default:
		return(0);
	}
}

int lose(int direction, Player *user)
{
	int caseY;
	int caseX;

	if (direction == 1) {
		caseY = user->position.y - 2;
		caseX = user->position.x;
		return (loosup(user, caseY, caseX));
	}
	if (direction == 2) {
		caseY = user->position.y + 2;
		caseX = user->position.x;
		return (loosdown(user, caseY, caseX));
	}
	if (direction == 3) {
		caseY = user->position.y;
		caseX = user->position.x + 2;
		return (loosright(user, caseY, caseX));
	} else if (direction == 4) {
		caseY = user->position.y;
		caseX = user->position.x - 2;
		return (loosleft(user, caseY, caseX));
	}
	return (2);
}
