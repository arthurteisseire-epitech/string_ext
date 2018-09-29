/*
** EPITECH PROJECT, 2017
** File Name : tests_strrpbrk.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include "my.h"

Test(strrpbrk, empty)
{
	cr_expect_null(strrpbrk("", ""));
	cr_expect_null(strrpbrk("", "abc"));
	cr_expect_null(strrpbrk("abc", ""));
}

Test(strrpbrk, basic)
{
	cr_expect_str_eq(strrpbrk("abc", "c"), "c");
	cr_expect_str_eq(strrpbrk("abc", "b"), "bc");
	cr_expect_str_eq(strrpbrk("abca", "a"), "a");
	cr_expect_str_eq(strrpbrk("test zzz", "t"), "t zzz");
}

Test(strrpbrk, no_match)
{
	cr_expect_null(strrpbrk("test", "a"));
	cr_expect_null(strrpbrk("test", "abc"));
	cr_expect_null(strrpbrk("no one char match with accept", "z"));
}
