CXX = c++ 

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror 

NAME = Animals

SRCS = main.cpp srcs/Animals.cpp srcs/Cat.cpp srcs/Dog.cpp srcs/WrongCat.cpp srcs/WrongAnimal.cpp

INC = -Iincludes

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INC) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
