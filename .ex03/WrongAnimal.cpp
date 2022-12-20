#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Constructor() called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : type(name)
{
	std::cout << "WrongAnimal Constructor(std::string) called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "WrongAnimal Constructor(const WrongAnimal &obj) called" << std::endl;
	*this = obj;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destractor() called" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &obj)
{
	if (this != &obj)
	{
		std::cout << "operator = called" << std::endl;
		std::cout << "obj._name" << obj.type << std::endl;
		this->type = obj.type;
	}
	return (*this);
}


const std::string &WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Represent of WrongAnimal barked 'Candy pop'" << std::endl;
	return ;
}