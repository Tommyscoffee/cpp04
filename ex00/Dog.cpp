#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog Constructor() called" << std::endl;
}

// Dog::Dog(std::string name)
// {
// 	std::cout << "Constructor(std::string) called" << std::endl;
// }

Dog::Dog(const Dog &obj)
{
	std::cout << "Dog Constructor(const Dog &obj) called" << std::endl;
	*this = obj;
}

Dog::~Dog()
{
	std::cout << "Dog Destractor() called" << std::endl;
}


Dog& Dog::operator = (const Dog &obj)
{
	if (this != &obj)
	{
		std::cout << "operator = called" << std::endl;
		std::cout << "obj._name" << obj.type << std::endl;
		this->type = obj.type;
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << this->getType() << " : bow wow" << std::endl;
	return ;
}