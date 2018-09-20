/*
** EPITECH PROJECT, 2017
** File Name : tests_strip.c
** File description:
** by Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(strip, simple_test)
{
	char *s = strdup("lllllllaaaaaatotolllllllaaaaaa");

	strip(&s, "la");
	cr_expect_str_eq(s, "toto");
}

Test(strip, null_case)
{
	char *s = NULL;

	strip(&s, " ");
	cr_assert(s == NULL);
	strip(NULL, " ");
}
