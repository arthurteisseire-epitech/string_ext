/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

typedef unsigned long size_t;

char*	strlast(const char *str);
char*	strrpbrk(const char *src, const char *accept);
size_t	strrspn(const char *src, const char *accept);
char*	strip(const char *src, const char *accept);
char**	strsplit(const char *src, const char *delim);

size_t	len_pa(const void **src);
void	free_pa(void **tofree_pa);

#endif
