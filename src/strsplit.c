/*
** EPITECH PROJECT, 2018
** string_ext
** File description:
** strsplit.c
*/

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "string_ext.h"

static char **teardown_string_into_tokens(char **tokens, char *tok_str,
                                          const char *delim)
{
    unsigned int i = 0;
    char *save_ptr = tok_str;

    do
        tokens[i] = strtok_r(NULL, delim, &save_ptr);
    while (tokens[i++] != NULL);
    return (tokens);
}

static char **create_tokens(char **tokens, const char *str, const char *delim)
{
    char *tok_str = strdup(str + strspn(str, delim));

    if (tok_str == NULL)
        return (NULL);
    tokens = teardown_string_into_tokens(tokens, tok_str, delim);
    return (tokens);
}

char **strsplit(const char *str, const char *delim)
{
    size_t nb_tok = strcount(str, delim);
    char **tokens = calloc(nb_tok + 1, sizeof(char *));

    if (tokens != NULL && nb_tok != 0)
        tokens = create_tokens(tokens, str, delim);
    return (tokens);
}
