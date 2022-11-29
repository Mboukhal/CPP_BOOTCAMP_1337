#pragma once
#include <iostream>

class ClapTrap{

	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDemage;

	public:
		ClapTrap		 			( std::string name ); 
		~ClapTrap		 			( void );
		void 		attack		 	( const std::string& target );
		void 		takeDamage	 	( unsigned int amount );
		void 		beRepaired	 	( unsigned int amount );
		void 		setSstatus  	( int = 10, int = 10, int = 0 );
		std::string	getName			( void );
		int			getHp			( void );
		int			getenergyPoints	( void );
		int			getattackDemage	( void );
		void 		printStatus 	( void );
};