# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 19:33:27 by mboukhal          #+#    #+#              #
#    Updated: 2022/08/30 16:16:51 by mboukhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL	= all

NAME 			= harl
FLAGS			= -Wall -Wextra -Werror
STD 			= -std=c++98
CC 				= c++

CFILES			= main.cpp Harl.cpp

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
	@ python -c "print('-' * $(LINE))"
	@ make fclean


.PHONY: fclean clean re all run