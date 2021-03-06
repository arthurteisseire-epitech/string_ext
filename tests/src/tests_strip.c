/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** tests_strip.c
*/

#include <criterion/criterion.h>
#include "string_ext.h"

void test_strip(char const *str, char const *accept, char const *expected)
{
    char *dest = strip(str, accept);

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
    test_strip("  !! test ! test !! ", " ! ! ", "test ! test");
}
