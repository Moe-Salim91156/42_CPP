CXX = c++

CXXFLAGSS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Fixed



all : $(NAME)


$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all


.PHONY : fclean all re clean
