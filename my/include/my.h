/*
** EPITECH PROJECT, 2017
** File Name : my.h
** File description:
** Project Name : clib_2018
*/

#ifndef MY_H
#define MY_H

typedef unsigned long size_t;

char*	strlast(char const *str);
char*	strrpbrk(char const *src, char const *accept);
size_t	strrspn(char const *src, char const *accept);
char*	strip(char const *src, char const *accept);

#endif
