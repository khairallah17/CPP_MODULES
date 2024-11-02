NAME = PmergeMe

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address
RM = rm -rf

SRCS = PmergeMe.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp PmergeMe.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean