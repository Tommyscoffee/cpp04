#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include "AAnimal.hpp"

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual	~AMateria(void);

		AMateria&	operator=(const AMateria& obj);

		const std::string& getType(void) const;
		void				setType(std::string const &type);

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target) = 0;

};

#endif