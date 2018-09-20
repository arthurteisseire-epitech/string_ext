/*
** EPITECH PROJECT, 2017
** File Name : tests_base.c
** File description:
** by Arthur Teisseire
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

Test(putnbr_base, binary)
{
	cr_redirect_stdout();
	putnbr_base(57, "01");
	cr_assert_stdout_eq_str("111001");
}

Test(putnbr_base, octal)
{
	cr_redirect_stdout();
	putnbr_base(57, "01234567");
	cr_assert_stdout_eq_str("71");
}

Test(putnbr_base, hexa)
{
	cr_redirect_stdout();
	putnbr_base(576789, "0123456789ABCDEF");
	cr_assert_stdout_eq_str("8CD15");
}
