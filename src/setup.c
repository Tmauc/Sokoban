/*
** EPITECH PROJECT, 2017
** setup
** File description:
** 
*/

#include "my.h"

Player *playerSetUp(int x, int y)
{
	Player *newPlayer;
	newPlayer = malloc(sizeof(Player));
	newPlayer->posbas.x = x;
	newPlayer->posbas.y = y;
	newPlayer->position.x = x;
	newPlayer->position.y = y;
	newPlayer->stock = 0;
	newPlayer->score = 0;

	mvprintw(newPlayer->posbas.y, newPlayer->posbas.x, "P");
	return newPlayer;
}
