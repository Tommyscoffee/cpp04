#include "AMateria.hpp"
#include "AAnimal.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Constructor() called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
	std::cout << "AMateria Constructor(const AMateria &obj) called" << std::endl;
	*this = obj;
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destractor() called" << std::endl;
}

AMateria& AMateria::operator = (const AMateria &obj)
{
	if (this != &obj)
	{
		std::cout << "operator = called" << std::endl;
		std::cout << "obj._name" << obj.type << std::endl;
		this->type = obj.type;
	}
	return (*this);
}


const std::string &AMateria::getType() const
{
	return (this->type);
}

void					AMateria::setType(std::string const & type)
{
	this->type = type;

	return ;
}

AMateria*				AMateria::clone(void) const
{
	return (new AMateria());
}

void					AMateria::use(ICharacter & target)
{
	std::cout << "If this prints, ther is a mistake\n";

	return ;
}
