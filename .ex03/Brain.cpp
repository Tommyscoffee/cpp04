#include "Brain.hpp"

Brain::Brain() :ideas()
{
	std::cout << "Brain Constructor() called" << std::endl;
}

// Brain::Brain(std::string name) : type(name)
// {
// 	std::cout << "Brain Constructor(std::string) called" << std::endl;
// }

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain Constructor(const Brain &obj) called" << std::endl;
	*this = obj;
}

Brain::~Brain()
{
	std::cout << "Brain Destractor() called" << std::endl;
}

/******************************************************************************
 * OPERATORS
 */

Brain& Brain::operator = (const Brain &obj)
{
		std::cout << "assignment operator = called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i]; 
		}
	}
	return (*this);
}

/******************************************************************************
 * GETTERS / SETTERS
 */