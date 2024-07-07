#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &toCopy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = toCopy;
}

Brain &Brain::operator=(const Brain &toCopy)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = toCopy.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Invalid index" << std::endl;
		return "";
	}
	return this->ideas[index];
}

void Brain::setIdea(int index, std::string idea)
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Invalid index" << std::endl;
		return ;
	}
	this->ideas[index] = idea;
}
