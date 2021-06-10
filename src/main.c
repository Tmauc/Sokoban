/*
** EPITECH PROJECT, 2017
** main
** File description:
** 
*/

#include "my.h"

int main(int ac, char **av)
{
	Player *user;
	int lose = 0;
	int file = open(av[1], O_RDONLY);

	if (ac == 1) {
		my_putstr("Erreur: Bad indentation!     [./my_sokoban -h] for help\n");
		return (84);
	} else {
		if (av[1][0] == '-' && av[1][1] == 'h') {
			help();
			return (84);
		} else {
			stopprog(file);
			screenSetUp();
			user = mapSetUp(av);
			lose = game(user, av);
		}
	}
	endwin();
	return (lose);
}
