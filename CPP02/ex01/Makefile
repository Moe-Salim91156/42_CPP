CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Fixed_2

all : $(NAME)


$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all 


.PHONY : all fclean clean re
