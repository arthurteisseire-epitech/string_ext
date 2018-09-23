##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC		=	gcc
DROOT		=	../
INC		=	$(DROOT)include/

DSRC		=	$(DROOT)src/
DSTRING		=	$(DSRC)string/
DPUT		=	$(DSRC)put/
DARRAY		=	$(DSRC)array/
DFILE		=	$(DSRC)file/

DSRC_UT		=	src/
DSTRING_UT	=	$(DSRC_UT)string/
DPUT_UT		=	$(DSRC_UT)put/
DARRAY_UT	=	$(DSRC_UT)array/
DFILE_UT	=	$(DSRC_UT)file/

SRC		=	$(DPUT)putnbr_base.c			\
			$(DSTRING)strip.c			\
			$(DSTRING)strrspn.c			\
			$(DSTRING)concat.c			\
			$(DSTRING)get_next_to.c			\
			$(DSTRING)get_before_to.c		\
			$(DSTRING)get_next_word.c		\
			$(DSTRING)count_words.c			\
			$(DSTRING)my_itoa.c			\
			$(DARRAY)len_pa.c			\
			$(DARRAY)cpy_pa.c			\
			$(DARRAY)dup_pa.c			\
			$(DARRAY)apply_on_array.c		\
			$(DARRAY)free_array.c			\
			$(DARRAY)split.c			\
			$(DARRAY)array_to_str.c			\
			$(DFILE)my_fdcpy.c			\
			$(DFILE)write_in_file.c			\

SRC_UT		=	$(DARRAY_UT)tests_split.c		\
			$(DARRAY_UT)tests_array_to_str.c	\
			$(DARRAY_UT)tests_len_pa.c		\
			$(DARRAY_UT)tests_cpy_pa.c		\
			$(DARRAY_UT)tests_dup_pa.c		\
			$(DSTRING_UT)tests_get_next_to.c	\
			$(DSTRING_UT)tests_get_before_to.c	\
			$(DSTRING_UT)tests_strrspn.c		\
			$(DSTRING_UT)tests_strip.c		\
			$(DPUT_UT)tests_base.c			\

CFLAGS	+=	-Wall -W -Wextra --coverage -I$(INC)
LDFLAGS	=	-lcriterion -lgcov
NAME	=	units

all:
	$(CC) -o $(NAME) $(SRC) $(SRC_UT) $(CFLAGS) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: CFLAGS += -g
debug: re

test_run: all
	./$(NAME)
	gcov *.gcno &> coverage

.PHONY:	all clean fclean re test_run debug
