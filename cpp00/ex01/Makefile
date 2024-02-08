NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = phonebook.cpp contact.cpp main.cpp

all: $(NAME)

$(NAME) : Makefile phonebook.hpp $(SRC)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(NAME)
	@printf "DELETED $(NAME) ---\n"

fclean: clean

re:	fclean $(NAME)

.PHONY: clean fclean re all