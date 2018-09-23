/*
** EPITECH PROJECT, 2017
** File Name : tests_pcpy_pa.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(cpy_pa, empty_pa)
{
	void *src_pa[] = {NULL};
	void *dest_pa[1];

	pcpy_pa(dest_pa, src_pa);
	cr_assert_arr_eq(dest_pa, src_pa, sizeof(void *));
}

Test(cpy_pa, basic)
{
	int len_i = 3;
	void *src_pa[] = {alloca(1), alloca(1), NULL};
	void *dest_pa[len_i];

	pcpy_pa(dest_pa, src_pa);
	cr_assert_arr_eq(dest_pa, src_pa, sizeof(void *) * len_i);
}
