# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 10:58:02 by mkhairal          #+#    #+#              #
#    Updated: 2023/11/07 15:31:45 by mkhairal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp Zombie.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean