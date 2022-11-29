#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "animal type:\t" << meta->getType() << " " << std::endl;
	std::cout << "dog type:\t" << j->getType() << " " << std::endl;
	std::cout << "cat type:\t" << i->getType() << " " << std::endl;
	std::cout << "cat sound:\t";
	i->makeSound(); //will output the cat sound!
	std::cout << "dog sound:\t"; j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	for (int i = 0; i < 50; i++)
		std::cout << "*";
	std::cout << "\n\n";

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << "wrong_animal type: " << wrongMeta->getType() << " " << std::endl;
	std::cout << "wrong_animal sound: " ;
	wrongMeta->makeSound();
	std::cout << "wrong_cat type: " << wrongI->getType() << " " << std::endl;
	std::cout << "wrong_cat sound: ";
	wrongI->makeSound();
	delete wrongMeta;

	std::cout << "\nsize Animal Calss (type):\t" << sizeof(Animal) << " " << std::endl;
	std::cout << "size WrongAnimal Calss (type):\t" << sizeof(WrongAnimal) << " " << std::endl;

	// system ("leaks Polymorphism");

	return 0;
}
