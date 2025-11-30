SRC = 	forsaken.c

OBJ	=	$(SRC:.c=.o)

NAME = roulette

all:	$(NAME)

$(NAME):	$(OBJ)
	clang -o $(NAME) $(SRC) -I ./include

clean:
	rm -f $(OBJ)
	

fclean:	clean
	rm -f $(NAME)

re:	fclean all