CC = c++
NAME = harlFilter
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Harl.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re:	fclean all