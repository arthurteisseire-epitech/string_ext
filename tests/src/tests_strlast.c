/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** tests_strlast.c
*/

#include <criterion/criterion.h>
#include "string_ext.h"

Test(strlast, empty)
{
    cr_expect_null(strlast(""));
}

Test(strlast, basic)
{
    cr_expect_str_eq(strlast("a"), "a");
    cr_expect_str_eq(strlast("last char is a z"), "z");
    cr_expect_str_eq(strlast("last char is a space "), " ");
    cr_expect_str_eq(strlast("last char is the number 2"), "2");
}
