NAME = Animals
CFLAGS = -Wall -Wextra -Werror -Iinc/ -std=c++98 
SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
TSRC = $(addprefix src/,$(SRC))
OBJDIR = temp/
OBJ = $(TSRC:%.cpp=$(OBJDIR)%.o)
DEPEND = $(OBJ:%.o=%.d)

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(NAME): $(OBJ)
	c++ $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJDIR)%.o: %.cpp Makefile
	@mkdir -p $(dir $@)
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