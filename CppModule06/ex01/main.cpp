#include "serial.hpp"

int main ( void ) {

	Data info = { 'c', "hi World!", 42 };

	std::cout << info << std::endl;
	uintptr_t serialData = serialize( &info );

	std::cout << (char *)serialData << std::endl;

	Data *reciver = deserialize( serialData );
	std::cout << *reciver << std::endl;


	
	return 0;
}