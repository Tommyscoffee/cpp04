#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal Constructor() called" << std::endl;
}

AAnimal::AAnimal(std::string name) : type(name)
{
	std::cout << "AAnimal Constructor(std::string) called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
	std::cout << "AAnimal Constructor(const AAnimal &obj) called" << std::endl;
	*this = obj;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destractor() called" << std::endl;
	// system("leaks -q a.out");
}

AAnimal& AAnimal::operator = (const AAnimal &obj)
{
	if (this != &obj)
	{
		std::cout << "operator = called" << std::endl;
		std::cout << "obj._name" << obj.type << std::endl;
		this->type = obj.type;
	}
	return (*this);
}


const std::string &AAnimal::getType() const
{
	return (this->type);
}

// void AAnimal::makeSound() const
// {
// 	std::cout << "Represent of AAnimal barked 'Candy pop'" << std::endl;
// 	return ;
// }