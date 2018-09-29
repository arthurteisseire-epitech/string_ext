/*
** EPITECH PROJECT, 2017
** File Name : strrpbrk.c
** File description:
** Project Name : clib_2018
*/

#include <string.h>
#include "my.h"

char *strrpbrk(char const *src, char const *accept)
{
	char *dest = strlast(src);

	if (dest == NULL)
		return (NULL);
	while (strchr(accept, *dest) == NULL) {
		if (dest == src)
			return (NULL);
		dest--;
	}
	return (dest);
}
