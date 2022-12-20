#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal(const std::string type);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal &obj);
		void makeSound()const ;
		const std::string &getType() const;
};
#endif