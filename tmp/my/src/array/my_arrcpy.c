/*
** EPITECH PROJECT, 2017
** File Name : my_arrcpy.c
** File description:
** Project Name : clib_2018
*/

void my_arrcpy(void **dest, void **src)
{
	int i = 0;

	while (src[i]) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
}
