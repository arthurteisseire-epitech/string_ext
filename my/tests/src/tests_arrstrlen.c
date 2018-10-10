/*
** EPITECH PROJECT, 2018
** my
** File description:
** tests_arrstrlen.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test(arrstrlen, empty)
{
    cr_expect_eq(arrstrlen((const char *[1]){NULL}), 0);
    cr_expect_eq(arrstrlen((const char *[2]){"", NULL}), 0);
}

Test(arrstrlen, basic)
{
    cr_expect_eq(arrstrlen((const char *[2]){"123", NULL}), 3);
    cr_expect_eq(arrstrlen((const char *[3]){"123", "456", NULL}), 6);
    cr_expect_eq(arrstrlen((const char *[4]){"a", "b", "c", NULL}), 3);
}
