##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC	=	gcc
INC	=	include/
DTESTS	=	tests/
DSRC	=	src/
DSTRING	=	$(DSRC)string/
DPUT	=	$(DSRC)put/
DARRAY	=	$(DSRC)array/
DFILE	=	$(DSRC)file/

SRC	=	$(DPUT)putnbr_base.c			\
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

CFLAGS	+=	-Wall -W -Wextra -I$(INC)
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	cp include/my.h ../../include
	ar rc $(NAME) $(OBJ)

clean:
	make clean -C $(DTESTS)
	rm -f $(OBJ)

fclean: clean
	make fclean -C $(DTESTS)
	rm -f $(NAME)

re:	fclean all

debug: CFLAGS += -g
debug: re

test_run:
	make test_run -C $(DTESTS)
