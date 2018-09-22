/*
** EPITECH PROJECT, 2017
** File Name : tests_array_to_str.c
** File description:
** Project Name : clib_2018
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(array_to_str, simple_test)
{
	char *array[] = {"Hello", "world", "!", NULL};
	char *res = array_to_str(array, " ");

	cr_assert_str_eq(res, "Hello world !");
}

Test(array_to_str, null_test)
{
	char *array[] = {NULL};
	char *res = array_to_str(array, " ");

	cr_assert_eq(res, NULL);
}
