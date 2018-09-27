/*
** EPITECH PROJECT, 2017
** File Name : tests_strip.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

void test_strip(char const *src, char const *accept, char *expected)
{
	char *dest = strip(src, accept);

	cr_assert_not_null(dest);
	cr_expect_str_eq(dest, expected);
	free(dest);
}

Test(strip, empty)
{
	test_strip("", "", "");
	test_strip("", "a", "");
	test_strip("a", "", "a");
}

Test(strip, prev)
{
	test_strip(" a", " ", "a");
	test_strip("   test", " ", "test");
	test_strip("  !! test", " !", "test");
	test_strip("  !! test", " ! ! ", "test");
}

Test(strip, next)
{
	test_strip("a ", " ", "a");
	test_strip("test   ", " ", "test");
	test_strip("test  !! ", " !", "test");
	test_strip("test  !! ", " ! ! ", "test");
}

Test(strip, both)
{
	test_strip(" a ", " ", "a");
	test_strip("   test   ", " ", "test");
	test_strip("  !! test  !! ", " !", "test");
	test_strip("  !! test  !! ", " ! ! ", "test");
}
