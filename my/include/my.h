/*
** EPITECH PROJECT, 2018
** clib_2018
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H

typedef unsigned long size_t;

char* strlast(const char *str);
char* strrpbrk(const char *str, const char *accept);
size_t strrspn(const char *str, const char *accept);
size_t strcount(const char *str, const char *delim);
char* strip(const char *str, const char *accept);
char** strsplit(const char *str, const char *delim);
char* strjoin(const char **array, const char *sep);
char* strcat_alloc(const char *str1, const char *str2);

size_t len_pa(const void **array);
size_t strlen_pa(const char **array);
void free_pa(void **tofree_pa);

#endif
