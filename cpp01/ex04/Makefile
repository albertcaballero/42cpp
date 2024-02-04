NAME = violence
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp

all: $(NAME)

$(NAME) : Makefile $(SRC) $(HEADERS)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(NAME)
	@printf "DELETED $(NAME) ---\n"

fclean: clean

re:	fclean $(NAME)

.PHONY: clean fclean re all