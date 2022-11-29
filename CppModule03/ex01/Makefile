.DEFAULT_GOAL	= all

NAME 			= serenaMyLove
CCFLAGS			= c++ -Wall -Wextra -Werror -std=c++98


CFILES			= main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS			= $(CFILES:.cpp=.o)

all : $(NAME)

.cpp.o:
	@ $(CCFLAGS) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ $(CCFLAGS) $(OBJS) -o $(NAME)

fclean: clean
	@ $(RM) -rf $(NAME) 

clean:
	@ $(RM) -rf $(OBJS)
	
re: fclean all

run: all
	@ clear
	@ python3 -c "import os;s = (str)('./$(NAME)'); \
	 	sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
	 	print(('.' * (sizeLine - (len(s) + 4))) + \
	 	' [' + s + '] ' + ('.' * (sizeLine)) + '\n')"
	@ ./$(NAME)
	@ make fclean
	@ python3 -c "import os;s = (str)('make fclean'); \
		sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
	 	print(('.' * (sizeLine - 15)) + ' [' + s + '] ' + ('.' * (sizeLine)) + '\n')"


.PHONY: fclean clean re all run