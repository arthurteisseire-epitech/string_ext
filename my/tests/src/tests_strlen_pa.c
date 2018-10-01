/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** tests_strlen_pa.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test(strlen_pa, empty)
{
    cr_expect_eq(strlen_pa((const char *[1]){NULL}), 0);
    cr_expect_eq(strlen_pa((const char *[2]){"", NULL}), 0);
}

Test(strlen_pa, basic)
{
    cr_expect_eq(strlen_pa((const char *[2]){"123", NULL}), 3);
    cr_expect_eq(strlen_pa((const char *[3]){"123", "456", NULL}), 6);
    cr_expect_eq(strlen_pa((const char *[4]){"a", "b", "c", NULL}), 3);
}
