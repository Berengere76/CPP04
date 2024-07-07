#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	private:

	public:
		WrongCat();
		WrongCat(const WrongCat &toCopy);
		WrongCat &operator=(const WrongCat &toCopy);
		~WrongCat();

		void makeSound() const;
};
