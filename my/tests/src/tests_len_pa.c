/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** tests_len_pa.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test(len_pa, empty)
{
	void *src_pa[] = {NULL};

	cr_expect_eq(len_pa((const void **)src_pa), 0);
}

Test(len_pa, basic)
{
	int src_ia[] = {1, 2, 3, 4, 5};
	const void *src_pa[] = {&src_ia[0], &src_ia[1], &src_ia[2], NULL};

	cr_expect_eq(len_pa((const void **)src_pa), 3);
}
