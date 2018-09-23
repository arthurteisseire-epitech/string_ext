/*
** EPITECH PROJECT, 2017
** File Name : tests_dup_pa.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(dup_pa, empty_pa)
{
	void *src_pa[] = {NULL};
	void **dest_pa = dup_pa(src_pa);

	if (dest_pa == NULL)
		exit(127);
	cr_assert_arr_eq(dest_pa, src_pa, sizeof(void *));
}

Test(dup_pa, basic)
{
	void *src_pa[] = {alloca(1), alloca(1), alloca(1), NULL};
	void **dest_pa = dup_pa(src_pa);

	if (dest_pa == NULL)
		exit(127);
	cr_assert_arr_eq(dest_pa, src_pa, sizeof(void *) * 4);
}
