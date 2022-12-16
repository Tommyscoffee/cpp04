#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Constructor() called" << std::endl;

}

// Cat::Cat(std::string name)
// {
// 	std::cout << "Constructor(std::string) called" << std::endl;
// }

Cat::Cat(const Cat &obj)
{
	std::cout << "Cat Constructor(const Cat &obj) called" << std::endl;
	*this = obj;
}

Cat::~Cat()
{
	std::cout << "Cat Destractor() called" << std::endl;
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

void Cat::makeSound() const
{
	std::cout << this->getType() << " : MeowMeow " << std::endl;
	return ;
}