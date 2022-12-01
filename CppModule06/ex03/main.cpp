#include "Intern.hpp"


int main ( void ) {

	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	{
		Intern someRandomIntern;
		Form* rrf1;
		rrf1 = someRandomIntern.makeForm("presidential pardon", "Bender");
	}

	{
		Intern someRandomIntern;
		Form* rrf2;
		rrf2 = someRandomIntern.makeForm("shrubbery creation", "Bender");
	}
	
	{
		Intern someRandomIntern;
		Form* rrf3;
		rrf3 = someRandomIntern.makeForm("tuo tuo", "Bender");
	}
	return 0;
}
