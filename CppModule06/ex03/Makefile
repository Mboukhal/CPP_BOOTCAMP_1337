.DEFAULT_GOAL	= all

NAME 			= coffeeMaking
CCFLAGS			= c++ -Wall -Wextra -Werror -std=c++98 #-g -fsanitize=address

CFILES			= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
				RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS			= $(CFILES:.cpp=.o)

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
	@ python3 -c "import os;s = (str)('./$(NAME)'); sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
	  print(('.' * (sizeLine - (len(s) + 4))) + ' [' + s + '] ' + ('.' * (sizeLine)))"
	@ ./$(NAME)
	@ python3 -c "import os;s = (str)('./$(NAME)'); sizeLine=((int)((os.get_terminal_size().columns) / 2)); \
	  print(('.' * (sizeLine - (len(s) + 4))) + ' [' + s + '] ' + ('.' * (sizeLine)))"
	@ printf "Press enter to fclean and reset shell ..."
	@ read
	@ make fclean
	@ reset


.PHONY: fclean clean re all run