SRC = 	my_strncmp.c

OBJ	=	$(SRC:.c=.o)

NAME = libmy.a

all:	$(NAME)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp  $(NAME) ../../

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)
	rm -f ../../$(NAME)

re:	fclean all