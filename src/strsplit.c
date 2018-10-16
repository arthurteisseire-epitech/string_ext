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

static bool is_empty(char **tokens)
{
    return (tokens[0] == NULL);
}

static char **allocate_tokens_pointers(const char *str, const char *delim)
{
    size_t nb_tok = strcount(str, delim);
    char **tokens = malloc(sizeof(char *) * (nb_tok + 1));

    return (tokens);
}

static char **teardown_string(char **tokens, char *tok_str, const char *delim)
{
    unsigned int i = 0;
    char *save_ptr;

    tokens[0] = strtok_r(tok_str, delim, &save_ptr);
    while (tokens[i] != NULL)
        tokens[++i] = strtok_r(NULL, delim, &save_ptr);
    return (tokens);
}

static char **create_tokens(char **tokens, const char *str, const char *delim)
{
    char *tok_str = strdup(str + strspn(str, delim));

    if (tok_str == NULL)
        return (NULL);
    tokens = teardown_string(tokens, tok_str, delim);
    if (is_empty(tokens))
        free(tok_str);
    return (tokens);
}

char **strsplit(const char *str, const char *delim)
{
    char **tokens = allocate_tokens_pointers(str, delim);

    if (tokens != NULL)
        tokens = create_tokens(tokens, str, delim);
    return (tokens);
}
