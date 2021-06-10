/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** 
*/

#ifndef MY_H
#define MY_H

#include <ncurses.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <utime.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <unistd.h>

typedef struct Position
{
	int x;
	int y;
} Position;
typedef struct Player
{
	Position position;
	Position posbas;
	int score;
	int stock;
} Player;
typedef struct Map
{
	Position position;
	int height;
	int width;
} Map;
int main(int ac, char **av);
void help();
void restart(Player *user, char **av);
Player *playerSetUp(int x, int y);
int game(Player *user, char **av);
int screenSetUp();
int handleInput(int input, Player *user);
void playerMove(int y, int x, Player * user, int perm);
int checkPosition(int newY, int newX, Player *user, int direction);
void checkcasemovex(int direction, Player *user, int newY, int newX);
int checkcasemove(int direction, Player *user, int newY, int newX);
Player *mapSetUp(char **av);
void my_putstr(char const *str);
void my_putchar(char c);
int lose(int direction, Player *user);
void playerMove2(int y, int x, Player * user);
void stopprog(int file);

#endif
