CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror 

SRCS = main.cpp Harl.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Harl 


all : $(NAME)


$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	@rm -rf $(OBJS)

fclean : clean 
	@rm -rf $(NAME)

re : fclean all 

.PHONY : all fclean clean re 



