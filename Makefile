##
## EPITECH PROJECT, 2018
## string_ext
## File description:
## Makefile
##

CC		=	gcc
INC		=	include/
DTESTS	=	tests/
DSRC	=	src/
DSRC_UT	=	tests/src/

SRC	=		$(DSRC)strip.c			\
			$(DSRC)strrpbrk.c		\
			$(DSRC)strrspn.c		\
			$(DSRC)strcount.c		\
			$(DSRC)strlast.c		\
			$(DSRC)strsplit.c		\
			$(DSRC)strjoin.c		\
			$(DSRC)strcat_alloc.c	\
			$(DSRC)arrlen.c			\
			$(DSRC)arrstrlen.c		\

SRC_UT	=	$(DSRC_UT)tests_strip.c			\
			$(DSRC_UT)tests_strrpbrk.c		\
			$(DSRC_UT)tests_strrspn.c		\
			$(DSRC_UT)tests_strcount.c		\
			$(DSRC_UT)tests_strlast.c		\
			$(DSRC_UT)tests_strsplit.c		\
			$(DSRC_UT)tests_strjoin.c		\
			$(DSRC_UT)tests_strcat_alloc.c	\
			$(DSRC_UT)tests_arrlen.c		\
			$(DSRC_UT)tests_arrstrlen.c		\

CFLAGS	+=	-Wall -W -Wextra -I$(INC)
LDFLAGS	=	-lcriterion
OBJ		=	$(SRC:.c=.o)
NAME	=	libstring_ext.a
NAME_UT	=	units

all: $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_UT)

re: fclean all

debug: CFLAGS += -g
debug: re

test_run: CFLAGS += --coverage
test_run:
	$(CC) -o $(NAME_UT) $(SRC) $(SRC_UT) $(CFLAGS) $(LDFLAGS)
	./$(NAME_UT)
	gcov *.gcno &> /dev/null

.PHONY: all clean fclean re debug test_run
