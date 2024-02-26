NAME = ScavTrap
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJDIR = temp/
OBJ = $(SRC:%.cpp=$(OBJDIR)%.o)
DEPEND = $(OBJ:%.o=%.d)

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: %.cpp Makefile
	c++ $(CFLAGS) -MMD -c $< -o $@

clean:
	@rm -rf $(OBJDIR)
	@echo "DELETED OBJECTS ---"

fclean: clean
	@rm -f $(NAME)
	@echo "DELETED $(NAME) ---"

re:	fclean all

.PHONY: clean fclean re all

-include $(DEPEND)