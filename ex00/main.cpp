#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
	std::cout << YELLOW << "----------------------" << NC << std::endl;
	std::cout << YELLOW << "-----ANIMAL TESTS-----" << NC << std::endl;
	std::cout << YELLOW << "----------------------" << NC << std::endl;

	std::cout << BLUE << "*****CONSTRUCTORS*****" << NC << std::endl;
	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << BLUE << "*****TYPES*****" << NC << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << BLUE << "*****SOUNDS*****" << NC << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	meta->makeSound();
	j->makeSound();
	
	std::cout << BLUE << "*****DESTRUCTORS*****" << NC << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << YELLOW << "---------------------------" << NC << std::endl;
	std::cout << YELLOW << "-----WRONGANIMAL TESTS-----" << NC << std::endl;
	std::cout << YELLOW << "---------------------------" << NC << std::endl;
	std::cout << BLUE << "*****CONSTRUCTORS*****" << NC << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongCat();

	std::cout << BLUE << "*****TYPES*****" << NC << std::endl;
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << j2->getType() << " " << std::endl;
	
	std::cout << BLUE << "*****SOUNDS*****" << NC << std::endl;
	j2->makeSound();
	meta2->makeSound();

	std::cout << BLUE << "*****DESTRUCTORS*****" << NC << std::endl;
	delete meta2;
	delete j2;

	return 0; 
}
