/*
** EPITECH PROJECT, 2018
** my
** File description:
** tests_strcount.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test(strcount, empty)
{
    cr_expect_eq(strcount("", ""), 0);
    cr_expect_eq(strcount("", "abc"), 0);
    cr_expect_eq(strcount("abc", ""), 1);
    cr_expect_eq(strcount("a b c", ""), 1);
}

Test(strcount, basic)
{
    cr_expect_eq(strcount("1 2", " "), 2);
    cr_expect_eq(strcount("1 2 ", " "), 2);
    cr_expect_eq(strcount(" 1 2 ", " "), 2);
    cr_expect_eq(strcount(" 1 2 3", " "), 3);
    cr_expect_eq(strcount(" 1 2 3 ", " "), 3);
    cr_expect_eq(strcount("   1 2 3 ", " "), 3);
    cr_expect_eq(strcount("   1 2 3     ", " "), 3);
    cr_expect_eq(strcount("   1   2    3     ", " "), 3);
    cr_expect_eq(strcount("   1,   2,    3  .", " ,."), 3);
}
