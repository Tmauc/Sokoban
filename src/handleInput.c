/*
** EPITECH PROJECT, 2017
** handleInput
** File description:
** 
*/

#include "my.h"

int handleInput(int input, Player *user)
{
	int newY;
	int newX;
	int direction = 0;

	refresh();
	switch(input) {
	case 'A':
		direction = 1;
		newY = user->position.y - 1;
		newX = user->position.x;
		break;
	case 'B':
		direction = 2;
		newY = user->position.y + 1;
		newX = user->position.x;
		break;
	case 'C':
		direction = 3;
		newY = user->position.y;
		newX = user->position.x + 1;
		break;
	case 'D':
		direction = 4;
		newY = user->position.y;
		newX = user->position.x - 1;
		break;
	default:
		newY = user->position.y;
		newX = user->position.x;
		break;
	}
	return (checkPosition(newY, newX, user, direction));
}
