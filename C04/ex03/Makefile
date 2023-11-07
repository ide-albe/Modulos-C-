CC = c++
NAME = animal
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp A_Materia.cpp 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re:	fclean all