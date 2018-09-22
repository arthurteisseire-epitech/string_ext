/*
** EPITECH PROJECT, 2017
** File Name : get_next_word.c
** File description:
** Project Name : clib_2018
*/

#include <stddef.h>
#include <string.h>
#include "my.h"

char *get_next_word(char **str, char const *flags)
{
	int len_word;
	char *word;

	(*str) += strspn(*str, flags);
	len_word = strcspn(*str, flags);
	if (len_word == 0)
		return (NULL);
	word = strndup(*str, len_word);
	(*str) += len_word;
	return (word);
}
