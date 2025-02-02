#include "Animal.hpp"

Animal::Animal(): type("Animal")
{
	std::cout << GREEN << "Animal constructor called" << NC << std::endl;
}

Animal::Animal(const Animal &toCopy)
{
	std::cout << GREEN << "Animal copy constructor called" << NC << std::endl;
	this->type = toCopy.type;
}

Animal &Animal::operator=(const Animal &toCopy)
{
	std::cout << GREEN << "Animal assignation operator called" << NC << std::endl;
	if (this == &toCopy)
		return *this;
	this->type = toCopy.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << GREEN << "Animal destructor called" << NC << std::endl;
}

void Animal::makeSound() const
{
	std::cout << GREEN << "Animal sound" << NC << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
