SRC			=	Zombie.cpp		\
				main.cpp
OBJ			=	$(SRC:.cpp=.o)
NAME		=	Zombie
CXX			= 	clang++
CXXFLAGS	= 	-Wextra -Wall -Werror -Wpedantic -g #-fsanitize=address

%.o		: %.cpp Makefile
	$(CXX) $(CXXFLAGS) -MMD -c $<

$(NAME)	: $(OBJ) Makefile
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

all		: $(NAME)

clean	:
	$(RM) $(OBJ)
	$(RM) $(SRC:.cpp=.d)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
