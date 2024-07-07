#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat &toCopy);
		Cat &operator=(const Cat &toCopy);
		~Cat();

		void makeSound() const;
};
