#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(const Cat &obj);
		~Cat();
		Cat& operator=(const Cat &obj);
		virtual void makeSound()const ;
		// *************
		//getter, setter
		Brain *getBrain()const;
};
#endif