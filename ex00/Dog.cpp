#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << CYAN << "Dog constructor called" << NC << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &toCopy): Animal()
{
	std::cout << CYAN << "Dog copy constructor called" << NC << std::endl;
	this->type = toCopy.type;
}

Dog &Dog::operator=(const Dog &toCopy)
{
	std::cout << CYAN << "Dog assignation operator called" << NC << std::endl;
	if (this == &toCopy)
		return *this;
	this->type = toCopy.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << CYAN << "Dog destructor called" << NC << std::endl;
}

void Dog::makeSound() const
{
	std::cout << CYAN << "Woof woof" << NC << std::endl;
}
