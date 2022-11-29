# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 15:53:58 by mboukhal          #+#    #+#              #
#    Updated: 2022/08/04 02:42:49 by mboukhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL	= all

NAME 			= PhoneBook
FLAGS			= -Wall -Wextra -Werror
STD 			= -std=c++98
CC 				= c++

CFILES			= src/main.cpp src/PhoneBook.class.cpp src/Contact.class.cpp \
					src/banner.cpp
OBJS			= $(CFILES:.cpp=.o)

FSANI			= -g -fsanitize=address

all : $(NAME)

.cpp.o:
	@ $(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ $(CC) $(FLAGS) $(OBJS) $(STD) -o $(NAME)

fclean: clean
	@ $(RM) -rf $(NAME) 

clean:
	@ $(RM) -rf $(OBJS)
	
re: fclean all

.PHONY: fclean clean re all libft