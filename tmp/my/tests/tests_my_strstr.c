/*
** EPITECH PROJECT, 2017
** File Name : tests_strstr.c
** File description:
** by Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(strstr, simple_test)
{
	char const *haystack = "lalalalala Hello World!";
	char const *needle = "Hello";

	cr_assert_str_eq(strstr(haystack, needle), "Hello World!");
}

Test(strstr, null_test)
{
	char const *haystack = "lalalalala Hello World!";
	char const *needle = "Hellooooooooooooo";

	cr_assert_eq(strstr(haystack, needle), NULL);
}
