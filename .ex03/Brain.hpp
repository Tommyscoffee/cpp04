#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{

	public:
		Brain();
		Brain(const Brain &obj);
		// Brain(const std::string type);
		virtual ~Brain();
		Brain& operator=(const Brain &obj);
		// virtual void makeSound()const ;
		const std::string &getType() const;

		std::string ideas[100];
};
#endif