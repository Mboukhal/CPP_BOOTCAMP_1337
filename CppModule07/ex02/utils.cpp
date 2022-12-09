#include "utils.hpp"

Base* generate( void ) {
	int rV = std::rand() % 3;
	switch (rV)
	{
		case 0:
			std::cout << "Type generated as: A" << std::endl; 
			return (new A());
		case 1:
			std::cout << "Type generated as: B" << std::endl; 
			return (new B());
		case 2:
			std::cout << "Type generated as: C" << std::endl; 
			return (new C());
	}
	return NULL;
}

void identify( Base* p ) {
	if ( dynamic_cast<A*>(p) ) {
		std::cout << "Type identifed as: A\n";
	}
	else {
		if ( dynamic_cast<B*>(p) ) {
			std::cout << "Type identifed as: B\n";
		}
		else {
			if ( dynamic_cast<C*>(p) ) {
				std::cout << "Type identifed as: C\n";
			}
			else{
				std::cerr << "None valide Type!" << std::endl; 
			}
		}
	}
}

void identify( Base& p ) {
	try{
		(void)dynamic_cast<A&>(p);
		std::cout << "Type identifed as: A" << std::endl;
	} catch ( std::bad_cast& ){
		try{
			(void)dynamic_cast<B&>(p);
			std::cout << "Type identifed as: B" << std::endl; 
		} catch ( std::bad_cast& ) {
			try{
				(void)dynamic_cast<C&>(p);
				std::cout << "Type identifed as: C" << std::endl; 
			} catch ( std::bad_cast& ) {
				std::cerr << "None valide Type!" << std::endl; 
			}
		}
	}
}