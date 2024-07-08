#include "Animal.hpp"

AAnimal::AAnimal(): type("AAnimal")
{
	std::cout << GREEN << "AAnimal constructor called" << NC << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
    std::cout << GREEN << "AAnimal copy constructor called" << NC << std::endl;
    this->type = other.type;
}

AAnimal &AAnimal::operator=(const AAnimal &toCopy)
{
	std::cout << GREEN << "AAnimal assignation operator called" << NC << std::endl;
	if (this == &toCopy)
		return *this;
	this->type = toCopy.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << GREEN << "AAnimal destructor called" << NC << std::endl;
}

std::string AAnimal::getType() const
{
	return this->type;
}
