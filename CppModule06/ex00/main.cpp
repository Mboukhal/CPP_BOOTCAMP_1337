#include <iostream>
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

bool cheakIsValid( std::string str )
{
	for ( size_t i = 0; i < str.length(); i++ ) {
		if ( i == str.length() - 1 && str[i] == 'f' )
			break;
		if ( !isdigit(str[i]) && str[i] != '.' && str[i] != '-')
			return false;
	}
	return true;
}

std::string floatPresantation( std::string in ) {
	std::string res;
	if ( in[in.length() - 1] == 'f' )
		in.erase( in.length() - 1, 1 );
	else
		return res;
	res = in;
	return res;
}

int main( int ac, char** av )
{
	if (ac == 2)
	{
		{
			std::cout << "Char: ";
			int a;
			std::stringstream stream;
			stream << av[1];
			stream >> a;
			if ( !cheakIsValid( av[1] ) )
				std::cout << "impossible" << std::endl;
			else {
				if ( isprint(a) )
					std::cout << "\'" << static_cast<char>(a) << "\'" << std::endl;
				else
					std::cout << "Non displayable" << std::endl;
			}
		}

		{
			std::cout << "Int: ";
			int a;

			std::string x = av[1];
			if ( x == "+inff" || x == "-inf" )
					std::cout << "impossible" << std::endl;
			else {
				std::stringstream stream;
				stream << av[1];
				stream >> a;
				if ( !cheakIsValid( av[1] ) )
					std::cout << "impossible" << std::endl;
				else
					std::cout << a << std::endl;
			}
		}

		{
			std::cout << "Float: ";
			std::string x = av[1];
			if ( x == "+inff")
				std::cout << "+inf" << std::endl;
			else if ( x == "-inf" )
				std::cout << "-inff" << std::endl;
			else {
				float a;
				x = "";
				x = floatPresantation( av[1] );
				std::stringstream stream;
				if ( x.empty() )
					stream << av[1];
				else
					stream << x;
				stream >> a; 
				if ( !cheakIsValid( av[1] ) )
					std::cout << "nanf" << std::endl;
				else
				{
					std::cout << std::fixed << std::setprecision(1)
							  << static_cast<float>(a) << "f" << std::endl;
				}
			}
		}

		{
			std::cout << "Double: ";
			std::string x ( av[1] );
			if ( x == "+inf")
				std::cout << "+inf" << std::endl;
			else if ( x == "-inf" )
				std::cout << "-inf" << std::endl;
			else {
				double a;
				x = "";
				x = floatPresantation( av[1] );
				std::stringstream stream;
				if ( x.empty() )
					stream << av[1];
				else
					stream << x;
				stream >> a; 
				if ( !cheakIsValid( av[1] ) )
					std::cout << "nan" << std::endl;
				else
				{
					std::cout << std::fixed << std::setprecision(1)
							  << static_cast<double>(a) << std::endl;
				}
			}
		}
		return 0;
	}
	else
		std::cerr << "Error!" << std::endl;

    return 1;
}