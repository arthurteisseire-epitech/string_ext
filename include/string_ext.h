/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** string_ext.h
*/

#ifndef STRING_EXT_H
#define STRING_EXT_H

typedef unsigned long size_t;

char *strlast(const char *str);
char *strrpbrk(const char *str, const char *accept);
size_t strrspn(const char *str, const char *accept);
size_t strcount(const char *str, const char *delim);
char *strip(const char *str, const char *accept);
char **strsplit(const char *str, const char *delim);
char *strjoin(const char **array, const char *sep);
char *strcat_alloc(const char *str_left, const char *str_right);
size_t arrlen(const void **array);
size_t arrstrlen(const char **array);

#endif
