/*
** EPITECH PROJECT, 2017
** File Name : disp_env.c
** File description:
** by Arthur Teisseire
*/

#include <stddef.h>
#include <stdio.h>
#include "my.h"

void disp_env(char **env)
{
	int i = 0;

	while (env[i] != NULL) {
		puts(env[i]);
		i++;
	}
}
