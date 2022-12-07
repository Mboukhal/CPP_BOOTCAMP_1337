#include "utils.hpp"

Base * generate( void ) {
	Base *res = 0;
	int rV = std::rand() % 3;

	switch (rV)
	{
		case 0:
			res = new A();
			std::cout << "Type generated: A" << std::endl; 
			break;
		case 1:
			res = new B();
			std::cout << "Type generated: B" << std::endl; 
			break;
		case 2:
			res = new C();
			std::cout << "Type generated: C" << std::endl; 
			break;
	}
	return res;
}

void identify( Base* p ) {
	try{
		A *x = dynamic_cast<A*>(p);
		x = 0;
		std::cout << "Type identifed: A" << std::endl; 
	} catch ( std::bad_cast& ){
		try{
			B *x = dynamic_cast<B*>(p);
			x = 0;
			std::cout << "Type identifed: B" << std::endl; 
		} catch ( std::bad_cast& ) {
			// dynamic_cast<C*>(p);
			std::cout << "Type identifed: C" << std::endl; 
		}
	}
}

void identify( Base& p ) {
	(void)p;

}