CC= c++
NAME=megaphone
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= megaphone.cpp 

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)
	
re: fclean all
