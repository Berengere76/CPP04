#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
	std::cout << GREEN << "WrongAnimal constructor called" << NC << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &toCopy)
{
	std::cout << GREEN << "WrongAnimal copy constructor called" << NC << std::endl;
	*this = toCopy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &toCopy)
{
	std::cout << GREEN << "WrongAnimal assignation operator called" << NC << std::endl;
	this->type = toCopy.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << GREEN << "WrongAnimal destructor called" << NC << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << GREEN << "WrongAnimal sound" << NC << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
