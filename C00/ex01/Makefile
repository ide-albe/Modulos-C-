CC= c++
NAME=phonebook
CFLAGS= -Wall -Wextra -Werror -std=c++98
SRC= PhoneBook.cpp Contact.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)
	
re: fclean all
