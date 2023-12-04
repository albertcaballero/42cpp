NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp

all: $(NAME)

$(NAME) : Makefile $(SRC)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re:	fclean $(NAME)

.PHONY: clean fclean re all