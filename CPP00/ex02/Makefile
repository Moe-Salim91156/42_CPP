CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Accounts.cpp tests.cpp 

OBJS = $(SRCS:.cpp=.o)

NAME = Account



all : $(NAME)


$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME) 

re : fclean all 

.PHONY: all fclean clean re
