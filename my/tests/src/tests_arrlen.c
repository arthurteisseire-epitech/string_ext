/*
** EPITECH PROJECT, 2018
** my
** File description:
** tests_arrlen.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test(arrlen, empty)
{
    void *src[] = {NULL};

    cr_expect_eq(arrlen((const void **)src), 0);
}

Test(arrlen, basic)
{
    int array[] = {1, 2, 3};
    const void *src[] = {&array[0], &array[1], &array[2], NULL};

    cr_expect_eq(arrlen((const void **)src), 3);
}
