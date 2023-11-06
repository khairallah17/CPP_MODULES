# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/28 21:48:38 by mkhairal          #+#    #+#              #
#    Updated: 2023/11/06 16:12:13 by mkhairal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re