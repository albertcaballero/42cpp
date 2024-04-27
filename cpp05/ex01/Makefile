NAME = Bureaucrats
CFLAGS = -Wall -Wextra -Werror -Iinc/ -std=c++98  -pedantic
SRC = main.cpp Bureaucrat.cpp Form.cpp
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