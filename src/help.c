/*
** EPITECH PROJECT, 2017
** help
** File description:
** 
*/

#include "my.h"
#define BUFF_SIZE 1024

void help()
{
	int file = open("help/h", O_RDONLY);
	char buff[BUFF_SIZE];

	while (read(file, buff, BUFF_SIZE)) {
		for (int i = 0; buff[i + 6] != '\0'; i++) {
			my_putchar(buff[i]);
		}
	}
	my_putchar('\n');
}
