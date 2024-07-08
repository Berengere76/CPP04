#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() 
{
	std::cout << YELLOW << "----------------------" << NC << std::endl;
	std::cout << YELLOW << "-----ANIMAL TESTS-----" << NC << std::endl;
	std::cout << YELLOW << "----------------------" << NC << std::endl;

	std::cout << BLUE << "*****CONSTRUCTORS*****" << NC << std::endl;
	const AAnimal *animals[10];
	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	
	std::cout << BLUE << "*****TYPES*****" << NC << std::endl;
	std::cout << animals[0]->getType() << std::endl;
	std::cout << animals[5]->getType() << std::endl;

	std::cout << BLUE << "*****SOUNDS*****" << NC << std::endl;
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();

	std::cout << BLUE << "*****DESTRUCTORS*****" << NC << std::endl;
	for (int i = 0; i < 10; i++)
		delete animals[i];

	std::cout << BLUE << "*****IDEAS*****" << NC << std::endl;
	Dog *newDog = new Dog;
	newDog->getBrain()->setIdea(0, "I want to poop");
	newDog->getBrain()->setIdea(1, "I want to pee");
	newDog->getBrain()->setIdea(2, "Feed me plz");
	std::cout << newDog->getBrain()->getIdea(0) << std::endl;
	std::cout << newDog->getBrain()->getIdea(1) << std::endl;
	std::cout << newDog->getBrain()->getIdea(2) << std::endl;

	std::cout << BLUE << "*****COPY*****" << NC << std::endl;
	Dog *copyDog = new Dog(*newDog);
	std::cout << copyDog->getBrain()->getIdea(0) << std::endl;
	std::cout << copyDog->getBrain()->getIdea(1) << std::endl;
	std::cout << copyDog->getBrain()->getIdea(2) << std::endl;

	delete newDog;
	delete copyDog;

	std::cout << BLUE << "*****COPY*****" << NC << std::endl;
	Cat *newCat = new Cat;
	newCat->getBrain()->setIdea(0, "I want to poop");
	newCat->getBrain()->setIdea(1, "I want to pee");
	newCat->getBrain()->setIdea(2, "Feed me plz");
	Cat *copyCat = new Cat;
	*copyCat = *newCat;
	std::cout << copyCat->getBrain()->getIdea(0) << std::endl;
	std::cout << copyCat->getBrain()->getIdea(1) << std::endl;
	std::cout << copyCat->getBrain()->getIdea(2) << std::endl;

	// AAnimal test = AAnimal();

	delete newCat;
	delete copyCat;

	return 0; 
}
