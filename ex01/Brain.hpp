#pragma once

#include <iostream>
#include <string>
#include "colors.h"

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &toCopy);
		Brain &operator=(const Brain &toCopy);
		~Brain();

		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);
};
