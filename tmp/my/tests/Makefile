##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC	=	gcc
DSRC_UT	=	./
DROOT	=	../
INC	=	$(DROOT)include/

DSRC	=	$(DROOT)
DSTRING	=	$(DSRC)string/
DPUT	=	$(DSRC)put/
DENV	=	$(DSRC)env/
DARRAY	=	$(DSRC)array/
DFILE	=	$(DSRC)file/

SRC	=	$(DPUT)my_putnbr_base.c		\
		$(DSTRING)my_strip.c		\
		$(DSTRING)count_endflags.c	\
		$(DSTRING)concat.c		\
		$(DSTRING)get_next_to.c		\
		$(DSTRING)get_before_to.c	\
		$(DSTRING)get_next_word.c	\
		$(DSTRING)is_char_in_str.c	\
		$(DSTRING)count_words.c		\
		$(DSTRING)my_itoa.c		\
		$(DARRAY)my_arrlen.c		\
		$(DARRAY)my_arrcpy.c		\
		$(DARRAY)my_arrdup.c		\
		$(DARRAY)apply_on_array.c	\
		$(DARRAY)add_arrelem.c		\
		$(DARRAY)rm_arrelem.c		\
		$(DARRAY)free_array.c		\
		$(DARRAY)split.c		\
		$(DARRAY)array_to_str.c		\
		$(DENV)disp_env.c		\
		$(DFILE)my_fdcpy.c		\
		$(DFILE)write_in_file.c		\

SRC_UT	=	$(DSRC_UT)redirect.c		\
		$(DSRC_UT)tests_split.c		\
		$(DSRC_UT)tests_get_next_to.c	\
		$(DSRC_UT)tests_get_before_to.c	\
		$(DSRC_UT)tests_array_to_str.c	\
		$(DSRC_UT)tests_base.c		

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

test_run: all
	./$(NAME)
	gcov *.gcno &> coverage

.PHONY:	all clean fclean re test_run
