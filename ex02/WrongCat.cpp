#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << PURPLE << "WrongCat constructor called" << NC << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &toCopy): WrongAnimal()
{
	std::cout << PURPLE << "WrongCat copy constructor called" << NC << std::endl;
	*this = toCopy;
}
WrongCat &WrongCat::operator=(const WrongCat &toCopy)
{
	std::cout << PURPLE << "WrongCat assignation operator called" << NC << std::endl;
	this->type = toCopy.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << PURPLE << "WrongCat destructor called" << NC << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << PURPLE << "Wrong Meow meow" << NC << std::endl;
}
