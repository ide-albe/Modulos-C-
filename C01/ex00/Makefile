CC= c++
NAME=brainz
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= main.cpp Zombie.cpp randomChump.cpp newZombie.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)
	
re: fclean all
