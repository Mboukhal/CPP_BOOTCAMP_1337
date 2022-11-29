#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define ANIMAL_ARRAY_SIZE 20

AAnimal**	arryAnimal( void )
{

	AAnimal**	newAnimal = new AAnimal*[ANIMAL_ARRAY_SIZE];

	for (int i = 0; i < ANIMAL_ARRAY_SIZE; i++) {

		if (i % 2)
			newAnimal[i] = new Dog();
		else
			newAnimal[i] = new Cat();
	}
	return newAnimal;
}

int main()
{

	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	Brain *b;

	std::cout << "================================="	<< "\n";
	std::cout << "j: ";
	j->makeSound();
	std::cout << "i: ";
	i->makeSound();
	std::cout << "================================="	<< "\n";

	delete j;//should not create a leak
	delete i;

	AAnimal** zoo = arryAnimal();

	std::cout << "________________________________"	<< "\n";
	for (int t = 0; t < ANIMAL_ARRAY_SIZE; t++) {

		std::cout << "Animal number (" << t << "):"	<< "\t";
		(*zoo[t]).makeSound();
	}

	b = &((*zoo[1]).getBrain());
	b->setIdeas( "i'm cute Miaw" );
	std::cout << b->getIdeas() << std::endl;
	std::cout << "________________________________"	<< "\n";
	for ( int t = 0; t < ANIMAL_ARRAY_SIZE; t++ )
		delete zoo[t];
	delete [] zoo;


	Dog *dog = new Dog();
	{
		std::cout << "\e[34m****** Scope Entry ******\e[0m" << std::endl;
		Dog *dogCopy = new Dog();
		*(dogCopy) = *(dog);
		std::cout << "dog:\t " << &(dog->getBrain())  << std::endl;
		std::cout << "dogCopy: " << &(dogCopy->getBrain()) << std::endl;
		if ( &(dog->getBrain()) != &(dogCopy->getBrain()) )
			std::cout << "\e[32mDeep Copy\e[0m" << std::endl;
		else
			std::cout << "\e[31mNo Deep Copy\e[0m" << std::endl;
		std::cout << "-------------------------" << std::endl;
		dogCopy->makeSound();
		std::cout << "-------------------------" << std::endl;
		std::cout << "\e[34m****** Scope Exit ******\e[0m" << std::endl;
		delete dogCopy;
	}
	delete dog;

	// system("leaks abstractClass");
	return 0;
}
