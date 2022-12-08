.DEFAULT_GOAL	= all

NAME 			= identifyRealType
CCFLAGS			= c++ -Wall -Wextra -Werror -std=c++98

CFILES			= main.cpp utils.cpp Base.cpp

OBJS			= $(CFILES:.cpp=.o)

LINE 			= python3 -c "import os;s = (str)('./$(NAME)'); sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
					print(('.' * ((sizeLine - (int)((len(s) + 4) / 2)))) + ' [' + s + '] ' + ('.' * ((sizeLine) - (int)((len(s) + 4) / 2) - 1)))"
BLINE			= python3 -c "import os;s = (str)('Press enter to fclean and reset shell ...'); sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
	  				print(('.' * ((sizeLine - (int)((len(s) + 4) / 2)))) + ' [' + s + '] ' + ('.' * ((sizeLine) - (int)((len(s) + 4) / 2) - 1)))"

all : $(NAME)

.cpp.o:
	@ $(CCFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ $(CCFLAGS) $(OBJS) -o $(NAME)
	@ echo "Use 'make run' for easy life"

clean:
	@ $(RM) -rf $(OBJS)

fclean: clean
	@ $(RM) -rf $(NAME) 
	
re: fclean all

run: all
	@ clear
	@ $(LINE)
	@ ./$(NAME)
	@ $(BLINE)
	@ read
	@ make fclean
	@ reset


.PHONY: fclean clean re all run