/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** strlen_pa.c
*/

#include <string.h>

size_t strlen_pa(const char **array)
{
	size_t i = 0;
	size_t len = 0;

	while (array[i] != NULL) {
		len += strlen(array[i]);
		i++;
	}
	return (len);
}
