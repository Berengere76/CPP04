#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
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

		virtual void makeSound() const = 0;
		std::string getType() const;
};
