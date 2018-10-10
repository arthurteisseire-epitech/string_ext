/*
** EPITECH PROJECT, 2018
** my
** File description:
** tests_strrspn.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test(strrspn, empty)
{
    cr_expect_eq(strrspn("", ""), 0);
    cr_expect_eq(strrspn("", "accept"), 0);
    cr_expect_eq(strrspn("text", ""), 0);
}

Test(strrspn, basic)
{
    cr_expect_eq(strrspn("lala0", "0"), 1);
    cr_expect_eq(strrspn("lala00", "0"), 2);
    cr_expect_eq(strrspn("basic test ???", "?"), 3);
}

Test(strrspn, advanced)
{
    cr_expect_eq(strrspn("0123456789", "0123456789"), 10);
    cr_expect_eq(strrspn("123123123", "123"), 9);
    cr_expect_eq(strrspn("test 123", "123"), 3);
}
