# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 13:27:13 by mkhairal          #+#    #+#              #
#    Updated: 2023/11/07 15:53:04 by mkhairal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -rf

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: re all clean fclean