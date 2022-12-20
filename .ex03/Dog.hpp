#ifndef DOG_HPP
#define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(const Dog &obj);
		~Dog();
		Dog& operator=(const Dog &obj);
		virtual void makeSound()const ;
		//*************
		// getter, setter
		Brain *getBrain()const;
};
#endif