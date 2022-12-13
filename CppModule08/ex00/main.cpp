#include "easyfind.hpp"

int main( void )
{
    int findNumber = 20; 
    std::vector<int> array( 20 );
    srand( time( NULL ) );
    for ( int i = 0; i < (int)array.size(); i++ ){
        array[i] = rand() % 21;                                             // random value range [0 - 20]
        if ( array[i] == findNumber )
            std::cout << "\e[41m" << array[i] << "\e[0m ";
        else
            std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    if ( easyfind( array, findNumber ) )
        std::cout << "\e[32m" << findNumber << ": is found\e[0m\n";
    else
        std::cerr << "\e[31m" << findNumber << ": not found!\e[0m\n";
    
    std::cout << "-------------------------------------------------\n";
    return 0;
}