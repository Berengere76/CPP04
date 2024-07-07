#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &toCopy);
		Dog &operator=(const Dog &toCopy);
		~Dog();

		void makeSound() const;
};
