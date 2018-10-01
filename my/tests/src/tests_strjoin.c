/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** tests_strjoin.c
*/

#include <criterion/criterion.h>
#include "my.h"

void test_strjoin(const char **array, const char *expected, const char *sep)
{
    char *dest = strjoin(array, sep);

    cr_assert_not_null(dest);
    cr_expect_str_eq(dest, expected);
    free(dest);
}

Test(strjoin, empty)
{
    test_strjoin((const char *[1]){NULL}, "", "");
    test_strjoin((const char *[1]){NULL}, "", ",");
    test_strjoin((const char *[2]){"", NULL}, "", "");
    test_strjoin((const char *[2]){"", NULL}, "", ",");
    test_strjoin((const char *[3]){"", "", NULL}, "", "");
    test_strjoin((const char *[3]){"", "", NULL}, "", ",");
    test_strjoin((const char *[4]){"", "", "", NULL}, "", ",");
}

Test(strjoin, basic)
{
    test_strjoin((const char *[2]){"t1", NULL}, "t1", "");
    test_strjoin((const char *[3]){"t1", "t2", NULL}, "t1t2", "");
    test_strjoin((const char *[4]){"t1", "t2", "t3", NULL}, "t1t2t3", "");
    test_strjoin((const char *[3]){"t1", "t2", NULL}, "t1,t2", ",");
}

Test(strjoin, advanced)
{
    test_strjoin((const char *[4]){"t1", "t2", "t3", NULL},
        "t1, t2, t3", ", ");
    test_strjoin((const char *[5]){"t1", "", "t2", "t3", NULL},
        "t1, t2, t3", ", ");
    test_strjoin((const char *[6]){"t1", "", "", "t2", "t3", NULL},
        "t1, t2, t3", ", ");
}
