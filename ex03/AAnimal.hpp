#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>

class AAnimal{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal &obj);
		AAnimal(const std::string type);
		virtual ~AAnimal();
		AAnimal& operator=(const AAnimal &obj);
		virtual void makeSound()const =0 ;
		const std::string &getType() const;
};
#endif