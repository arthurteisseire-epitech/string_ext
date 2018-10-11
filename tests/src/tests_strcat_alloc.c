/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** tests_strcat_alloc.c
*/

#include <criterion/criterion.h>
#include "string_ext.h"

void test_strcat_alloc(const char *str_left, const char *str_right,
                       const char *expected)
{
    char *dest = strcat_alloc(str_left, str_right);

    cr_assert_not_null(dest);
    cr_expect_str_eq(dest, expected);
    free(dest);
}

Test(strcat_alloc, empty)
{
    test_strcat_alloc("", "", "");
    test_strcat_alloc("hello", "", "hello");
    test_strcat_alloc("", "world", "world");
}

Test(strcat_alloc, basic)
{
    test_strcat_alloc("hello ", "world", "hello world");
    test_strcat_alloc("test", "123", "test123");
}
