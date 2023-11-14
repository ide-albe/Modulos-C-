CC = c++
NAME = materia
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp AMateria.cpp MateriaSource.cpp Cure.cpp Ice.cpp Character.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re:	fclean all