CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror


SRCS = main.cpp Fixed.cpp


OBJS = $(SRCS:.cpp=.o)


NAME = Fixed_3



all : $(NAME)


$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)


clean:
	rm -rf $(OBJS)

fclean : clean
	
	rm -rf $(NAME)

re : fclean all 


.PHONY : fclean all clean re
