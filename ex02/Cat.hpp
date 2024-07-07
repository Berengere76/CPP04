#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(const Cat &toCopy);
		Cat &operator=(const Cat &toCopy);
		~Cat();

		void makeSound() const;
		Brain *getBrain() const;
};
