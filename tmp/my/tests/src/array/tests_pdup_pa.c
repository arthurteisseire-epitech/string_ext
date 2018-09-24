/*
** EPITECH PROJECT, 2017
** File Name : tests_ppdup_pa.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(pdup_pa, empty_pa)
{
	void *src_pa[] = {NULL};
	void **dest_pa = pdup_pa(src_pa);

	cr_assert_not_null(dest_pa);
	cr_assert_arr_eq(dest_pa, src_pa, sizeof(void *));
}

Test(pdup_pa, basic)
{
	int _ia[] = {0, 1, 8};
	void *src_pa[] = {&_ia[0], &_ia[1], &_ia[2], NULL};
	void **dest_pa = pdup_pa(src_pa);

	cr_assert_not_null(dest_pa);
	cr_assert_arr_eq(dest_pa, src_pa, sizeof(void *) * 4);
}
