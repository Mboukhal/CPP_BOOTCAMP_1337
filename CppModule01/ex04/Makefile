# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboukhal <mboukhal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 17:43:10 by mboukhal          #+#    #+#              #
#    Updated: 2022/09/01 07:07:58 by mboukhal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.DEFAULT_GOAL	= all

NAME 			= replacer
FLAGS			= -Wall -Wextra -Werror
STD 			= -std=c++98
CC 				= c++

CFILES			= main.cpp replace.cpp

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

FILE = "test.rr"

run: all
	@ reset
	@ python -c "print('-' * $(LINE) + '\n')"
	./$(NAME) $(FILE) '123' 'sss'
	@ make fclean
	@ read -p "Press any key to clean and exit..."
	@ rm $(FILE).replace


.PHONY: fclean clean re all run