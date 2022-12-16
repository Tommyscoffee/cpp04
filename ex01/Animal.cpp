#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Constructor() called" << std::endl;
}

Animal::Animal(std::string name) : type(name)
{
	std::cout << "Animal Constructor(std::string) called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal Constructor(const Animal &obj) called" << std::endl;
	*this = obj;
}

Animal::~Animal()
{
	std::cout << "Animal Destractor() called" << std::endl;
}

Animal& Animal::operator = (const Animal &obj)
{
	if (this != &obj)
	{
		std::cout << "operator = called" << std::endl;
		std::cout << "obj._name" << obj.type << std::endl;
		this->type = obj.type;
	}
	return (*this);
}


const std::string &Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Represent of Animal barked 'Candy pop'" << std::endl;
	return ;
}