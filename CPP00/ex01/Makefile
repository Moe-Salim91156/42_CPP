CXX = clang++ #c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PhoneBook.cpp Contact.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = phonebook



all : $(NAME)


$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME) 

re : fclean all 

.PHONY: all fclean clean re
