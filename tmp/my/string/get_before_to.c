/*
** EPITECH PROJECT, 2017
** File Name : get_before_to.c
** File description:
** by Arthur Teisseire
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

int count_to_word(char const *str, char const *word)
{
	int len = strlen(word);
	int i = 0;

	while (str[i] != '\0') {
		if (strncmp(&str[i], word, len) == 0)
			return (i);
		i++;
	}
	return (i);
}

char *get_before_to(char const *str, char const *flags)
{
	int len = count_to_word(str, flags);

	return (strndup(str, len));
}
