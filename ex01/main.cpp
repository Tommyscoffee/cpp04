#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	{
// 		const Animal* meta = new Animal();
// 		const Animal* dog = new Dog();
// 		const Animal* cat = new Cat();
// 		std::cout << dog->getType() << " " << std::endl;
// 		std::cout << cat->getType() << " " << std::endl;
// 		meta->makeSound();
// 		cat->makeSound(); //will output the cat sound!
// 		dog->makeSound();
// 		delete meta;
// 		delete dog;
// 		delete cat;
// 	}
// 	{
// 		const WrongAnimal* metaWrong = new WrongAnimal();
// 		const WrongAnimal* catWrong = new WrongCat();

// 		std::cout << catWrong->getType() << std::endl;
// 		metaWrong->makeSound();
// 		catWrong->makeSound();
// 		delete metaWrong;
// 		delete catWrong;
// 	}
// 	return 0;
// }

// int	main( void )
// {
// 	const Animal* meta = new Animal();
// 	const Animal* dog = new Dog();
// 	const Animal* cat = new Cat();

// 	std::cout << dog->getType() << std::endl;
// 	std::cout << cat->getType() << std::endl;
// 	meta->makeSound();
// 	cat->makeSound();
// 	dog->makeSound();
// 	delete meta;
// 	delete cat;
// 	delete dog;


// 	const WrongAnimal* metaWrong = new WrongAnimal();
// 	const WrongAnimal* catWrong = new WrongCat();

// 	std::cout << catWrong->getType() << std::endl;
// 	metaWrong->makeSound();
// 	catWrong->makeSound();
// 	delete metaWrong;
// 	delete catWrong;
// }

#define N 4
#include <unistd.h>
# define GREEN	"\033[1;32m"
# define RED 	"\033[1;31m"
# define ORANGE	"\033[1;33m"
# define CYAN	"\033[1;36m"
# define NC     "\033[0m"

static void	tic_tac(int usleep_time, int duration, std::string color)
{
	for (int i = 0; i < duration; i++)
	{
		std::cout << color << "↓" << NC << std::endl;
		usleep(usleep_time);
	}
}

int main(void) {
	// {
	// 	// Heap allocation
	// 	const Animal *dog = new Dog();
	// 	tic_tac(500000, 2, GREEN);
	// 	const Animal *cat = new Cat();
	// 	tic_tac(500000, 2, GREEN);
	// 	delete dog;
	// 	tic_tac(500000, 2, GREEN);
	// 	delete cat;
	// 	tic_tac(500000, 5, GREEN);
	// }
	// {
	// 	// Stack allocation
	// 	Dog dog;
	// 	tic_tac(500000, 2, RED);
	// 	Cat cat;
	// 	tic_tac(500000, 2, RED);
	// 	Cat cat2(cat); // Copy constructor
	// 	tic_tac(500000, 5, RED);
	// }
	{
		// Array of pointers to Animal
		Animal *animals[N];
		for (int i = 0; i < N; i++) {
			tic_tac(500000, 2, CYAN);
			if (i % 2 == 0)
				animals[i] = new Dog();
			else
				animals[i] = new Cat();
		}
		for (int i = 0; i < N; i++) {
			tic_tac(500000, 2, CYAN);
			animals[i]->makeSound();
			tic_tac(500000, 2, CYAN);
			delete animals[i];
		}
		tic_tac(500000, 2, ORANGE);
	}
	// {
	// 	Dog basic;
	// 	tic_tac(500000, 2, ORANGE);
	// 	{  
	// 		Dog tmp = basic ;
	// 	}
	// 	tic_tac(500000, 2, ORANGE);
	// }
	return (0);
}