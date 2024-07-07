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

Dog::Dog(const Dog &toCopy): Animal(toCopy)
{
    std::cout << CYAN << "Dog copy constructor called" << NC << std::endl;
    this->brain = new Brain(*toCopy.brain);
    if (!this->brain)
    {
        std::cerr << "Failed to allocate memory for brain" << std::endl;
        exit(1);
    }
}

Dog &Dog::operator=(const Dog &toCopy)
{
    std::cout << CYAN << "Dog assignation operator called" << NC << std::endl;
    if (this == &toCopy)
        return *this;
    // Call base class assignment operator
    Animal::operator=(toCopy);

    this->type = toCopy.type;

    // Delete the existing brain to avoid memory leak
    delete this->brain;

    this->brain = new Brain(*toCopy.brain);
    if (!this->brain)
    {
        std::cerr << "Failed to allocate memory for brain" << std::endl;
        exit(1);
    }
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