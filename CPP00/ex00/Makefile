CXX = clang++ #c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98


NAME = megaphone


SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)


all : $(NAME)


$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)


re : fclean all


.PHONY: all clean fclean re 
