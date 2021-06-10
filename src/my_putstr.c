/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** 
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void my_putstr(char const *str)
{
	for (int i = 0; str[i] != 0; i++) {
		my_putchar(str[i]);
	}
}
