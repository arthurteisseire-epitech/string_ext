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

SRC	=	

CFLAGS	+=	-Wall -W -Wextra -I$(INC)
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

all: $(OBJ)
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

.PHONY: all clean fclean re debug test_run
