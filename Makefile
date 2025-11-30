SRC = 	main.c	\
		forsaken.c	\
		window.c

OBJ	=	$(SRC:.c=.o)

NAME = roulette

CSFML = -l csfml-audio
CSFML += -l csfml-graphics
CSFML += -l csfml-window
CSFML += -l csfml-network

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	clang -o $(NAME) $(SRC) -I ./include -L ./ $(CSFML)

clean:
	rm -f lib/my/*.o
	rm -f $(OBJ)

fclean:	clean
	rm -f lib/my/$(NAME)
	rm -f $(NAME)

re:	fclean all