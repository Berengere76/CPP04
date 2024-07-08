#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include "colors.h"

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal &toCopy);
		AAnimal &operator=(const AAnimal &toCopy);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;
};
