/*
** EPITECH PROJECT, 2017
** File Name : tests_len_pa.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(len_pa, empty_pa)
{
	void *empty_pa[] = {NULL};

	cr_assert_eq(len_pa(empty_pa), 0);
}

Test(len_pa, basic)
{
	void *data_pa[] = {alloca(1), alloca(1), alloca(1), NULL};

	cr_assert_neq(len_pa(data_pa), 0);
	cr_assert_eq(len_pa(data_pa), 3);
}
