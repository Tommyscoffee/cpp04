#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor() called" << std::endl;

}

// WrongCat::WrongCat(std::string name)
// {
// 	std::cout << "Constructor(std::string) called" << std::endl;
// }

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "WrongCat Constructor(const WrongCat &obj) called" << std::endl;
	*this = obj;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destractor() called" << std::endl;
}


WrongCat& WrongCat::operator = (const WrongCat &obj)
{
	if (this != &obj)
	{
		std::cout << "operator = called" << std::endl;
		std::cout << "obj._name" << obj.type << std::endl;
		this->type = obj.type;
	}
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << this->getType() << " : MeowMeow " << std::endl;
	return ;
}