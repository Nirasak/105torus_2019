##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

SRC	=	src/main.c	\
		src/torus.c	\
		src/bisection.c	\
		src/newton.c	\
		src/secant.c	\
		src/utils.c

SRC_TEST =	tests/test_torus.c	\
			src/utils.c			\
			src/torus.c			\
			src/bisection.c		\
			src/newton.c		\
			src/secant.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	105torus

NAME_TEST = unit_tests

CFLAGS	=	-W -Wall

CPPFLAGS	=	-I include/

LDFLAGS	=	-lm

TEST_FLAGS = --coverage -lcriterion

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

tests_run : $(OBJ_TEST)
	$(CC) -o $(NAME_TEST) $(SRC_TEST) $(LDFLAGS) $(CPPFLAGS) $(TEST_FLAGS)
	./unit_tests

clean:
	rm -f $(OBJ)
	rm -f *.gc*

fclean:	clean
	rm -f $(NAME)
	rm -f $(NAME_TEST)

re:	fclean all

.PHONY:	all clean fclean re
