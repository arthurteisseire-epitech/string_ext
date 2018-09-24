/*
** EPITECH PROJECT, 2017
** File Name : tests_vdup_pa.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(vdup_pa, empty_pa)
{
	int *src_pa[] = {NULL};
	void **dest_pa = vdup_pa((void **)src_pa, sizeof(int));

	cr_assert_not_null(dest_pa);
	cr_assert_null(dest_pa[0]);
	cr_assert_arr_eq(dest_pa, src_pa, sizeof(int *));
}

static int cmp(void **a_ip, void **b_ip)
{
	return (**(int **)a_ip != **(int **)b_ip);
}

Test(vdup_pa, basic)
{
	int _ia[] = {0, 1, 5};
	int *src_pa[] = {&_ia[0], &_ia[1], &_ia[2], NULL};
	void **dest_pa = vdup_pa((void **)src_pa, sizeof(int));

	cr_assert_not_null(dest_pa);
	cr_assert_neq(dest_pa[0], src_pa[0]);
	cr_assert_arr_eq_cmp((void **)dest_pa, (void **)src_pa, 3, cmp);
}
