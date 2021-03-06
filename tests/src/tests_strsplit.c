/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** tests_strsplit.c
*/

#include <criterion/criterion.h>
#include "string_ext.h"

int compare_pointed_strings(char **dest_str, char **expected_str)
{
    return (strcmp(*dest_str, *expected_str));
}

void test_strsplit(char const *str, char const *delim, char const **expected)
{
    char **dest = strsplit(str, delim);

    cr_assert_not_null(dest);
    cr_expect_arr_eq_cmp(
        dest,
        (char **)expected,
        arrlen((const void **)dest),
        compare_pointed_strings
    );
    free(*dest);
    free(dest);
}

Test(strsplit, empty)
{
    test_strsplit("", "", (const char *[1]){NULL});
    test_strsplit("", "abc", (const char *[1]){NULL});
    test_strsplit("t1", "", (const char *[1]){"t1"});
    test_strsplit("t1 t2", "", (const char *[1]){"t1 t2"});
}

Test(strsplit, basic)
{
    test_strsplit("t1 t2", " ", (const char *[2]){"t1", "t2"});
    test_strsplit(" t1 t2 t3 ", " ", (const char *[3]){"t1", "t2", "t3"});
    test_strsplit("  t1, ,  t2,  t3", " ,.",
                  (const char *[3]){"t1", "t2", "t3"});
    test_strsplit("  t1, ,  t2,  t3,  .", " ,.",
                  (const char *[3]){"t1", "t2", "t3"});
}
