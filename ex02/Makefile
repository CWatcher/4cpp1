SRC			= main.cpp
NAME		= aa
CXX			= clang++
CXXFLAGS	= -Wextra -Wall -Werror -Wpedantic -std=c++98 -g

$(NAME)	: $(SRC) Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

all		: $(NAME)

clean	:

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
