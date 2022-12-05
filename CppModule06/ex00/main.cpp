#include "Conversion.hpp"
#include <stdlib.h>
#include <sstream>

// #define SSTR( x ) static_cast< std::ostringstream & >( \
//         ( std::ostringstream() << std::dec << x ) ).str()

std::string toStr( int x ) {
	std::ostringstream oss;
	oss << x;
	return oss.str();
}

std::string charRes( std::string in ) {
	int tmp = atoi( in.c_str() );
	std::string res = "\'";
	std::string num ( 1, tmp );
	res += num + '\'';
	if ( tmp > 127 || tmp < 0 )
		res = "Non displayable";
	return res;
}

std::string intRes( std::string in ) {
	std::string res;
	int tmp = atoi( in.c_str() );
	res = toStr( tmp );
	return res;
}

std::string floatRes( std::string in ) {
	std::string res;
	float tmp = atof( in.c_str() );
	res = toStr( tmp ) + ".0f";
	return res;
}

std::string doubleRes( std::string in ) {
	std::string res;
	double tmp = std::stod( in.c_str() );
	res = toStr( tmp );
	return res;
}

void start( std::string& input ){
	// if ( input )

	std::string res = "char: ";
	res += charRes( input ) + '\n';
	res += "int: ";
	res += intRes( input ) + '\n';
	res += "float: ";
	res += floatRes( input ) + '\n';
	res += "double: ";
	res += doubleRes( input ) + '\n';
	std::cout << res;
}

// 	if ( input.size() == 1 ) {
// 		toChar( input );
// 		// return;
// 	}
// 	if ( input.find("f") )
// 	std::cout << input << '\n';
//     // convert string to float
//     float num_float = std::stof(input);
// 	std::cout << input << ": " << num_float << '\n';

// //     // convert string to double
//     double num_double = std::stod(input);
// 	std::cout << input << ": " << num_double << '\n';

// //     // convert string to int
//     int num_int = std::stoi(input);
// 	std::cout << input << ": " << num_int << '\n';

int main ( int ac, char **av ) {

	if ( ac == 2 )
	{
		std::string input = std::string(av[1]);
		start( input );
		return 0;
	}

	return 1;
}