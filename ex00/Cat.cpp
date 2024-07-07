#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << PURPLE << "Cat constructor called" << NC << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &toCopy): Animal()
{
	std::cout << PURPLE << "Cat copy constructor called" << NC << std::endl;
	this->type = toCopy.type;
}
Cat &Cat::operator=(const Cat &toCopy)
{
	std::cout << PURPLE << "Cat assignation operator called" << NC << std::endl;
	if (this == &toCopy)
		return *this;
	this->type = toCopy.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << PURPLE << "Cat destructor called" << NC << std::endl;
}

void Cat::makeSound() const
{
	std::cout << PURPLE << "Meow meow" << NC << std::endl;
}
