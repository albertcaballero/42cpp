NAME = easyFind
SRC = main.cpp
FLAGS = -std=c++98 -Wall -Wextra -Werror
DEPFLAGS = -MMD -MP
DIR_OBJ = tmp/
OBJ = $(addprefix $(DIR_OBJ),$(SRC:.cpp=.o))
DEP = $(OBJ:.o=.d)

all: $(DIR_OBJ) $(NAME)

$(DIR_OBJ):
	mkdir -p $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

$(DIR_OBJ)%.o: %.cpp Makefile 
	c++ $(FLAGS) $(DEPFLAGS) -c $< -o $@

clean:
	rm -fr $(DIR_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEP)