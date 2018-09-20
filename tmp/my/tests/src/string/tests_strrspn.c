/*
** EPITECH PROJECT, 2017
** File Name : tests_strrspn.c
** File description:
** By Arthur Teisseire
*/

#include <criterion/criterion.h>
#include "my.h"

Test(strrspn, empty_chain)
{
	cr_expect_eq(strrspn("", ""), 0);
	cr_expect_eq(strrspn("", "a"), 0);
	cr_expect_eq(strrspn("a", ""), 0);
	cr_expect_eq(strrspn("abcd", ""), 0);
	cr_expect_eq(strrspn("", "abcd"), 0);
}

Test(strrspn, basic)
{
	cr_expect_eq(strrspn("a", "a"), 1);
	cr_expect_eq(strrspn("a", "cba"), 1);
	cr_expect_eq(strrspn("aa", "cba"), 2);
	cr_expect_eq(strrspn("taa", "cba"), 2);
}

Test(strrspn, advanced)
{
	cr_expect_eq(strrspn("test de folie !!!", "c!ba"), 3);
	cr_expect_eq(strrspn("test de folie !!!", "!"), 3);
	cr_expect_eq(strrspn("tttttttttt", "t"), 10);
	cr_expect_eq(strrspn("tttttttttt", "ttt"), 10);
	cr_expect_eq(strrspn("aatttttttttt", "ttt"), 10);
	cr_expect_eq(strrspn("at", "at"), 2);
	cr_expect_eq(strrspn("atatatat", "at"), 8);
}
