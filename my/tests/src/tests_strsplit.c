/*
** EPITECH PROJECT, 2017
** File Name : tests_strsplit.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

int cmpf(char **a, char **b)
{
	return(strcmp(*a, *b));
}

void test_strsplit(char const *src, char const *delim, char const **expected)
{
	char **dest_pa = strsplit(src, delim);

	cr_assert_not_null(dest_pa);
	cr_assert_arr_eq_cmp(
		dest_pa,
		(char **)expected,
		len_pa((const void **)dest_pa),
		cmpf
	);
	free_pa((void **)dest_pa);
}

Test(strsplit, empty)
{
	char **dest_pa;

	dest_pa = strsplit("", "");
	cr_expect_null(dest_pa);
	dest_pa = strsplit("", "");
}
