NAME = account
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Account.cpp

all: $(NAME)

$(NAME) : Makefile $(SRC)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(NAME)
	@printf "DELETED $(NAME) ---\n"

fclean: clean

re:	fclean $(NAME)

.PHONY: clean fclean re all