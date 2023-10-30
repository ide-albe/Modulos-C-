CC=c++
NAME=brainz
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC=main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all