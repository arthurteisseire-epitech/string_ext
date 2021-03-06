/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** tests_strrpbrk.c
*/

#include <criterion/criterion.h>
#include "string_ext.h"

Test(strrpbrk, empty)
{
    cr_expect_null(strrpbrk("", ""));
    cr_expect_null(strrpbrk("", "abc"));
    cr_expect_null(strrpbrk("abc", ""));
}

Test(strrpbrk, basic)
{
    cr_expect_str_eq(strrpbrk("a", "a"), "a");
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
