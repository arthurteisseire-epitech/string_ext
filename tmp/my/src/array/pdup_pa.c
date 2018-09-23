/*
** EPITECH PROJECT, 2017
** File Name : pdup_pa.c
** File description:
** Project Name : clib_2018
*/

#include <stdlib.h>
#include "my.h"

void **pdup_pa(void **src_pa)
{
	void **dest_pa = malloc(sizeof(void *) * (len_pa(src_pa) + 1));

	if (dest_pa == NULL)
		return (NULL);
	pcpy_pa(dest_pa, src_pa);
	return (dest_pa);
}
