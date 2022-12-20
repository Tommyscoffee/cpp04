#include "AMateria.hpp"
#include "AAnimal.hpp"
#include "ICharacter.hpp"

ICharacter::ICharacter()
{
	std::cout << "ICharacter Constructor() called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &obj)
{
	std::cout << "ICharacter Constructor(const ICharacter &obj) called" << std::endl;
	*this = obj;
}

ICharacter::~ICharacter()
{
	std::cout << "ICharacter Destractor() called" << std::endl;
}

ICharacter& ICharacter::operator = (const ICharacter &obj)
{
	if (this != &obj)
	{
		std::cout << "operator = called" << std::endl;
		std::cout << "obj._name" << obj.type << std::endl;
		this->type = obj.type;
	}
	return (*this);
}

#endif