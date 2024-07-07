#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << CYAN << "Dog constructor called" << NC << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	if (!this->brain)
	{
		std::cerr << "Failed to allocate memory for brain" << std::endl;
		exit(1);
	}
}

Dog::Dog(const Dog &toCopy): Animal()
{
	std::cout << CYAN << "Dog copy constructor called" << NC << std::endl;
	*this = toCopy;
}

Dog &Dog::operator=(const Dog &toCopy)
{
	std::cout << CYAN << "Dog assignation operator called" << NC << std::endl;
	if (this == &toCopy)
		return *this;
	this->type = toCopy.type;
	this->brain = new Brain;
	if (!this->brain)
	{
		std::cerr << "Failed to allocate memory for brain" << std::endl;
		exit(1);
	}
	*this->brain = *toCopy.brain;
	return *this;
}

Dog::~Dog()
{
	std::cout << CYAN << "Dog destructor called" << NC << std::endl;
	delete this->brain;
}

void Dog::makeSound() const
{
	std::cout << CYAN << "Woof woof" << NC << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->brain;
}