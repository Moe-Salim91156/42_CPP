CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = violence

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)


$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean : 
	@rm -rf $(OBJS)

fclean : clean
	@rm -rf $(NAME)

re : fclean all 

.PHONY: all fclean clean re
 
