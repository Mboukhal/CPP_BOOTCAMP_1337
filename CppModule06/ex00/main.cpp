#include "Conversion.hpp"


void toChar( std::string& input ) {
	if ( input[0] > 127 || input[0] < 0 )
		std::cerr << "Can't use non displayable character!" << std::endl;
	else 
		std::cout << "Ok!" << std::endl;
}

void start( std::string& input ){
	if ( input.size() == 1 ) {
		toChar( input );
		return;
	}
	if ( input.find("f") )
	std::cout << input << '\n';
    // convert string to float
    float num_float = std::stof(input);
	std::cout << input << ": " << num_float << '\n';

//     // convert string to double
    double num_double = std::stod(input);
	std::cout << input << ": " << num_double << '\n';

//     // convert string to int
    int num_int = std::stoi(input);
	std::cout << input << ": " << num_int << '\n';
}

int main ( int ac, char **av ) {

	if ( ac == 2 )
	{
		std::string input = std::string(av[1]);
		start( input );
		return 0;
	}

	return 1;
}