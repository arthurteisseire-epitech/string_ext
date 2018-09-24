/*
** EPITECH PROJECT, 2017
** File Name : vdup_pa.c
** File description:
** Project Name : clib_2018
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"

void **vdup_pa(void **src_pa, size_t size)
{
	int _i = 0;
	void **dest_pa = malloc(sizeof(void *) * (len_pa(src_pa) + 1));

	if (dest_pa == NULL)
		return (NULL);
	while (src_pa[_i] != NULL) {
		dest_pa[_i] = malloc(sizeof(size));
		if (dest_pa[_i] == NULL)
			return (NULL);
		memcpy(dest_pa[_i], src_pa[_i], size);
		_i++;
	}
	return (dest_pa);
}
