#pragma once

#include <iostream>
#include <string>
#include "colors.h"

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &toCopy);
		Animal &operator=(const Animal &toCopy);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string getType() const;
};
