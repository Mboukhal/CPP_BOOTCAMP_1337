.DEFAULT_GOAL	= all

NAME 			= abstractClass
CFLAGS			= -Wall -Wextra -Werror 
std				= -std=c++98
CFILES			= main.cpp AAnimal.cpp Cat.cpp Dog.cpp brain.cpp

OBJS			= $(CFILES:.cpp=.o)

all : $(NAME)

.cpp.o:
	@ c++ $(CFLAGS) $(STD) -c $< -o $@

$(NAME): $(OBJS)
	@ c++ $(CFLAGS) $(STD) $(OBJS) -o $(NAME)
	@ echo "Use 'make run' for easy life"

clean:
	@ $(RM) -rf $(OBJS)

fclean: clean
	@ $(RM) -rf $(NAME) 
	
re: fclean all

run: all
	@ clear
	@ python3 -c "import os;s = (str)('./$(NAME)'); sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
	  print(('.' * (sizeLine - (len(s) + 4))) + ' [' + s + '] ' + ('.' * (sizeLine)) + '\n')"
	@ ./$(NAME)
	@ python3 -c "import os;s = (str)('make fclean'); sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
	  print(('.' * (sizeLine - 15)) + ' [' + s + '] ' + ('.' * (sizeLine)) + '\n')"
	@ printf "Press enter to fclean and reset shell ..."
	@ read
	@ make fclean
	@ reset


.PHONY: fclean clean re all run