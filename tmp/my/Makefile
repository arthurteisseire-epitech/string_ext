##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Arthur Teisseire
##

CC	=	gcc
INC	=	include/
DTESTS	=	tests/
DSRC	=	./
DSTRING	=	$(DSRC)string/
DPUT	=	$(DSRC)put/
DENV	=	$(DSRC)env/
DARRAY	=	$(DSRC)array/
DFILE	=	$(DSRC)file/

SRC	=	$(DPUT)my_putnbr_base.c		\
		$(DSTRING)my_strip.c		\
		$(DSTRING)count_endflags.c	\
		$(DSTRING)my_ftoa.c		\
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

test_run:
	make test_run -C $(DTESTS)
