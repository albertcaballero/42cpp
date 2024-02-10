NAME = harlFilter
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Harl.cpp
HEADERS = Harl.hpp

all: $(NAME)

$(NAME) : Makefile $(SRC) $(HEADERS)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(NAME)
	@printf "DELETED $(NAME) ---\n"

fclean: clean

re:	fclean $(NAME)

.PHONY: clean fclean re all