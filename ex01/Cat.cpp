#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(): Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat Constructor() called" << std::endl;

}

// Cat::Cat(std::string name)
// {
// 	std::cout << "Constructor(std::string) called" << std::endl;
// }

Cat::Cat(const Cat &obj) : _brain(new Brain(*obj._brain))
{
	std::cout << "Cat Constructor(const Cat &obj) called" << std::endl;
	*this = obj;
}

Cat::~Cat()
{
	std::cout << "Cat Destractor() called" << std::endl;
	if (this->_brain)
		delete this->_brain;
}


Cat& Cat::operator = (const Cat &obj)
{
	if (this != &obj)
	{
		std::cout << "operator = called" << std::endl;
		std::cout << "obj._name" << obj.type << std::endl;
		this->type = obj.type;
	}
	return (*this);
}

/******************************************************************************
 * MEMBER FUNCTIONS
 */
void Cat::makeSound() const
{
	std::cout << this->getType() << " : MeowMeow " << std::endl;
	return ;
}

Brain *Cat::getBrain()const
{
	return (this->_brain);
}

