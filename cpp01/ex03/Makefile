NAME = violence
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

all: $(NAME)

$(NAME) : Makefile $(SRC)
	c++ $(CFLAGS) $(SRC) -o $(NAME)

clean:
	@rm $(NAME)
	@printf "DELETED $(NAME) ---\n"

fclean: clean

re:	fclean $(NAME)

.PHONY: clean fclean re all