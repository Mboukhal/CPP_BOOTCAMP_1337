# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 07:49:02 by mboukhal          #+#    #+#              #
#    Updated: 2022/10/08 15:18:46 by mboukhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL	= all

NAME 			= Fixed
FLAGS			= -Wall -Wextra -Werror
STD 			= -std=c++98
CC 				= c++

CFILES			= main.cpp Fixed.cpp

OBJS			= $(CFILES:.cpp=.o)

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

LINE = 90

run: all
	@ reset
	@ python -c "print('-' * $(LINE) + '\n')"
	./$(NAME)


.PHONY: fclean clean re all run