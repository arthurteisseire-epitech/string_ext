/*
** EPITECH PROJECT, 2017
** File Name : tests_vcpy_pa.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(vcpy_pa, empty)
{
	int *src_pa[] = {NULL};
	int *dest_pa[1];

	dest_pa[0] = alloca(sizeof(int));
	if (dest_pa[0] == NULL)
		exit(127);
	vcpy_pa(dest_pa, src_pa);
	cr_assert_arr_neq(dest_pa, src_pa, sizeof(void *));
}

static int cmp(int **a, int **b)
{
	if (**a == **b)
		return (0);
	return (1);
}

Test(vcpy_pa, basic)
{
	int len_i = 4;
	int src_ia[] = {1, 3, 8};
	int *src_pa[] = {&src_ia[0], &src_ia[1], &src_ia[2], NULL};
	int *dest_pa[len_i];

	for (int _i = 0; _i < len_i; _i++) {
		dest_pa[_i] = alloca(sizeof(int));
		if (dest_pa[_i] == NULL)
			exit(127);
	}
	vcpy_pa(dest_pa, src_pa);
	cr_assert_arr_neq(dest_pa, src_pa, sizeof(void *) * len_i);
	cr_expect_arr_eq_cmp(dest_pa, src_pa, 1, cmp);
	cr_expect_arr_eq_cmp(dest_pa, src_pa, 3, cmp);
}
