#pragma once

#include <iostream>
#include <string>
#include "colors.h"

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &toCopy);
		WrongAnimal &operator=(const WrongAnimal &toCopy);
		virtual ~WrongAnimal();

		void makeSound() const;
		std::string getType() const;
};
