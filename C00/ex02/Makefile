CC= c++
NAME=dreamjob
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= Account.cpp tests.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)
	
re: fclean all
