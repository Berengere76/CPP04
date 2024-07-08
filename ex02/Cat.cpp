#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	std::cout << PURPLE << "Cat constructor called" << NC << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	if (!this->brain)
	{
		std::cerr << "Failed to allocate memory for brain" << std::endl;
		exit(1);
	}
}

Cat::Cat(const Cat &toCopy): AAnimal(toCopy)
{
    std::cout << PURPLE << "Cat copy constructor called" << NC << std::endl;
    this->brain = new Brain(*toCopy.brain);
    if (!this->brain)
    {
        std::cerr << "Failed to allocate memory for brain" << std::endl;
        exit(1);
    }
}

Cat &Cat::operator=(const Cat &toCopy)
{
    std::cout << PURPLE << "Cat assignation operator called" << NC << std::endl;
    if (this == &toCopy)
        return *this;
    // Call base class assignment operator
    AAnimal::operator=(toCopy);

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

Cat::~Cat()
{
	std::cout << PURPLE << "Cat destructor called" << NC << std::endl;
	delete this->brain;
}

void Cat::makeSound() const
{
	std::cout << PURPLE << "Meow meow" << NC << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->brain;
}
