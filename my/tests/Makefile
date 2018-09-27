##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC		=	gcc
DROOT		=	../
DINC		=	$(DROOT)include/
DSRC		=	$(DROOT)src/
DSRC_UT		=	src/

SRC		=	$(DSRC)strip.c

SRC_UT		=	$(DSRC_UT)tests_strip.c

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
