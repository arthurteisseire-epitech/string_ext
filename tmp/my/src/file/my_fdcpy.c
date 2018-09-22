/*
** EPITECH PROJECT, 2017
** File Name : my_fdcpy.c
** File description:
** Project Name : clib_2018
*/

#include <unistd.h>
#include "my.h"

void my_fdcpy(int fd_dest, int fd_src)
{
	char buffer[READ_SIZE];
	int size = read(fd_src, buffer, READ_SIZE);

	while (size == READ_SIZE) {
		write(fd_dest, buffer, size);
		size = read(fd_src, buffer, READ_SIZE);
	}
	write(fd_dest, buffer, size);
}
