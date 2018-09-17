/*
** EPITECH PROJECT, 2017
** File Name : count_words.c
** File description:
** by Arthur Teisseire
*/

#include <string.h>
#include "my.h"

int count_words(char const *str, char const *flags)
{
	int nb_words = 0;

	while (*str != '\0') {
		str += strspn(str, flags);
		if (*str != '\0')
			nb_words++;
		str += strcspn(str, flags);
	}
	return (nb_words);
}
