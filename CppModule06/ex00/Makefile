.DEFAULT_GOAL	= all

NAME 			= ConversionOfScalarTypes

C++				= c++
CFLAGS			= -Wall -Wextra -Werror -std=c++98

CFILES			= main.cpp Conversion.cpp

OBJS			= $(CFILES:.cpp=.o)

LINE 			= python3 -c "import os;s = (str)('./$(NAME)'); sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
					print(('.' * ((sizeLine - (int)((len(s) + 4) / 2)))) + ' [' + s + '] ' + ('.' * ((sizeLine) - (int)((len(s) + 4) / 2) - 1)))"
BLINE			= python3 -c "import os;s = (str)('Press enter to fclean and reset shell ...'); sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
	  				print(('.' * ((sizeLine - (int)((len(s) + 4) / 2)))) + ' [' + s + '] ' + ('.' * ((sizeLine) - (int)((len(s) + 4) / 2) - 1)))"

all : $(NAME)

.cpp.o:
	@ $(C++) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ $(C++) $(OBJS) -o $(NAME)
	@ echo "Use 'make run' for easy life"

clean:
	@ $(RM) -rf $(OBJS)

fclean: clean
	@ $(RM) -rf $(NAME) 
	
re: fclean all
	@ echo "\"Make re\" has no sense when you have 'make run' :P"


ARG = 4246546546546546.0f

run: all
	@ clear
	@ $(LINE)
	./$(NAME) 42
	@ $(LINE)
	./$(NAME) 42.0f
	@ $(LINE)
	./$(NAME) nan
	@ $(LINE)
	./$(NAME) -inf
	@ $(LINE)
	./$(NAME) 546.001
	@ $(BLINE)
	# @ read
	@ make fclean
	# @ reset


.PHONY: fclean clean re all run