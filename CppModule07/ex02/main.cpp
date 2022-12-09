#include "utils.hpp"

// void tmp( void ){

	// int res = 1;
	// identify( reinterpret_cast<Base*>(res) );
	// std::cout << "\n---------------------------\n" ;
	// Base *res2 = new B();
	// identify( *res2 );
	// delete res2;
	// std::cout << "\n---------------------------\n" ;
	// Base *res3 = new C();
	// identify( *res3 );
	// delete res3;

	// std::cout << "\n---------------------------\n" ;
	// std::cout << "\n---------------------------\n" ;
	// std::cout << "\n---------------------------\n" ;
	
	// Base *res4 = new A();
	// identify( res4 );
	// delete res4;
	// std::cout << "\n---------------------------\n" ;
	// Base *res5 = new B();
	// identify( res5 );
	// delete res5;
	// std::cout << "\n---------------------------\n" ;
	// Base *res6 = new C();
	// identify( res6 );
	// delete res6;
	// std::cout << "\n---------------------------\n" ;
// }

int main ( void ) {

	std::cout << "<--------[Pointer]--------->\n\n" ;
	for ( int i = 0; i < 10; i++ ) {
		Base *resPtr = generate();
		identify( resPtr );
		std::cout << std::endl;
		delete resPtr;
	}

	std::cout << "\n<--------[Refrance]--------->\n\n" ;
	for ( int i = 0; i < 10; i++ ) {
		Base *res = generate();
		identify( *res );
		std::cout << std::endl;
		delete res;
	}
	
	return 0;
}
