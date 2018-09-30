##
## EPITECH PROJECT, 2018
## clib_2018
## File description:
## Makefile
##

CC		=	gcc
DROOT		=	../
DINC		=	$(DROOT)include/
DSRC		=	$(DROOT)src/
DSRC_UT		=	src/

SRC		=	$(DSRC)strip.c			\
			$(DSRC)strrpbrk.c		\
			$(DSRC)strrspn.c		\
			$(DSRC)strcount.c		\
			$(DSRC)strlast.c		\
			$(DSRC)strsplit.c		\
			$(DSRC)free_pa.c		\
			$(DSRC)len_pa.c			\

SRC_UT		=	$(DSRC_UT)tests_strip.c		\
			$(DSRC_UT)tests_strrpbrk.c	\
			$(DSRC_UT)tests_strrspn.c	\
			$(DSRC_UT)tests_strcount.c	\
			$(DSRC_UT)tests_strlast.c	\
			$(DSRC_UT)tests_strsplit.c	\
			$(DSRC_UT)tests_len_pa.c	\

CFLAGS	+=	-Wall -W -Wextra --coverage -I$(DINC)
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

.PHONY:	all clean fclean re debug test_run
