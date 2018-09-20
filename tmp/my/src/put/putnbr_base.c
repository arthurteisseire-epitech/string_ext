/*
** EPITECH PROJECT, 2017
** File Name : putnbr_base.c
** File description:
** By Arthur Teisseire
*/

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "my.h"

int putnbr_base(unsigned int nbr, char const *base)
{
	unsigned int nb_base = strlen(base);
	int size = 0;

	if (nbr >= nb_base) {
		size += putnbr_base(nbr / nb_base, base);
		write(1, &base[nbr % nb_base], 1);
		return (size + 1);
	} else {
		write(1, &base[nbr % nb_base], 1);
		size++;
	}
	return (size);
}
