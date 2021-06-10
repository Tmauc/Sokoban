/*
** EPITECH PROJECT, 2017
** windows
** File description:
** 
*/

#include "my.h"
#define BUFF_SIZE 1024

void stopprog(int file)
{
	if (file == -1)
		exit(84);
}
int screenSetUp()
{
	WINDOW *window = initscr();
	noecho();
	curs_set(0);
	nodelay(window, true);
	refresh();
	return (1);
}

Player *mapSetUp(char **av)
{
	Player *user;
	int file = open(av[1], O_RDONLY);
	char buff[BUFF_SIZE];
	int y = 0;
	int x = 0;
	int score = 0;

	while (read(file, buff, BUFF_SIZE)) {
		for (int i = 0; buff[i] != '\0'; i++) {
			if (buff[i] != 'P' && buff[i] != ' ' && buff[i] != 'X' && buff[i] != 'O' && buff[i] != '#' && buff[i] != '\n' && buff[i] != '\0') {
				user->score = score;
				return (user);
			}
			if (buff[i] == 'P') {
				user = playerSetUp(x, y);
			}
			if (buff[i] == 'X')
				score++;
			if (buff[i] != '\n') {
				mvprintw(y, x, "%c", buff[i]);
				x++;
			} else {
				mvprintw(y, x, "%c", buff[i]);
				x = 0;
				y++;
			}
		}
	}
	user->score = score;
	return (user);
}
