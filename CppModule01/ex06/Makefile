# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 19:33:27 by mboukhal          #+#    #+#              #
#    Updated: 2022/08/30 16:15:04 by mboukhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL	= all

NAME 			= HarlFilter
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
	./$(NAME) "DEBUG"
	@ python -c "print('\n' + '-' * $(LINE) + '\n')"
	./$(NAME) "INFO"
	@ python -c "print('\n' + '-' * $(LINE) + '\n')"
	./$(NAME) "WORNING"
	@ python -c "print('\n' + '-' * $(LINE) + '\n')"
	./$(NAME) "ERROR"
	@ python -c "print('\n' + '-' * $(LINE) + '\n')"
	./$(NAME) "HHH"
	@ python -c "print('\n' + '-' * $(LINE) + '\n')"
	./$(NAME) "I am not sure how tired I am today..."
	@ make fclean
	@ python -c "print('\n' + '-' * $(LINE))"


.PHONY: fclean clean re all run