/*
** EPITECH PROJECT, 2017
** File Name : my.h
** File description:
** By Arthur Teisseire
*/

#ifndef MY_H
#define MY_H

#define READ_SIZE 4096

char*	get_next_line(int fd);

char*	get_env_value(char const *var, char **env);
int	index_name(char *var_name, char **env);
void	disp_env(char **env);
int	set_env_value(char *name, char *new_value, char **env);

char**	split(char *str, char const *flags);
char*	array_to_str(char **array, char *between);
void	free_array(void **array);
int     my_arrlen(void **data);
void	my_arrcpy(void **dest, void **array);
void	rm_arrelem(void **array, int index, void (*free_func)(void *ptr));
void*	add_arrelem(void **array, void *data);
int	apply_on_array(void **array, int (*applyf)());

int	write_in_file(char *pathname, int fd_in, int flag_open);
void	my_fdcpy(int fd_dest, int fd_src);

int	my_putnbr_base(unsigned int nbr, char const *base);

char*	get_next_word(char **str, char const *flags);
int	count_words(char const *str, char const *flags);
int	len_to_flags(char const *str, char const *flags);
char*	concat(char *dest, char *src, int len_src);
int	nb_len(int nb);
int	count_flags(char const *str, char const *flags);
int	count_endflags(char const *str, char const *flags);
char*	get_next_to(char const *str, char const *flags);
char*	get_before_to(char const *str, char const *flags);
void	bufferize(char *str);
int	count_to_word(char const *str, char const *word);
char*	my_itoa(int nb);
char*	my_strip(char **str, char const *flags);

#endif
