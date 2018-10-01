/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** tests_strsplit.c
*/

#include <criterion/criterion.h>
#include "my.h"

int cmpf(char **a, char **b)
{
    return (strcmp(*a, *b));
}

void test_strsplit(char const *src, char const *delim, char const **expected)
{
    char **dest_pa = strsplit(src, delim);

    cr_assert_not_null(dest_pa);
    cr_expect_arr_eq_cmp(
        dest_pa,
        (char **)expected,
        len_pa((const void **)dest_pa),
        cmpf
    );
    free(*dest_pa);
    free(dest_pa);
}

Test(strsplit, empty)
{
    test_strsplit("", "", (const char *[1]){""});
    test_strsplit("", "abc", (const char *[1]){""});
    test_strsplit("t1", "", (const char *[1]){"t1"});
    test_strsplit("t1 t2", "", (const char *[1]){"t1 t2"});
}

Test(strsplit, basic)
{
    test_strsplit("t1 t2", " ", (const char *[2]){"t1", "t2"});
    test_strsplit(" t1 t2 t3 ", " ", (const char *[3]){"t1", "t2", "t3"});
    test_strsplit("  t1, ,  t2,  t3", " ,."
        , (const char *[3]){"t1", "t2", "t3"});
    test_strsplit("  t1, ,  t2,  t3,  .", " ,."
        , (const char *[3]){"t1", "t2", "t3"});
}
