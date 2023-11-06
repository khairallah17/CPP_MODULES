# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkhairal <mkhairal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 14:52:26 by mkhairal          #+#    #+#              #
#    Updated: 2023/11/06 15:12:13 by mkhairal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror
NAME = PhoneBook

SRCS= Contact.cpp \
	PhoneBook.cpp \
	main.cpp 

OBJS = $(SRCS:.cpp=.o)

all : $(NAME) 

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(HEADERS) $(OBJS) -o $(NAME)

%.o : %.cpp Contact.hpp PhoneBook.hpp
	$(CC) $(HEADERS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: re all fclean clean