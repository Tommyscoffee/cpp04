#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <libc.h>
#include "ICharacter.hpp"


// #define N 4
// #include <unistd.h>
// # define GREEN	"\033[1;32m"
// # define RED 	"\033[1;31m"
// # define ORANGE	"\033[1;33m"
// # define CYAN	"\033[1;36m"
// # define NC     "\033[0m"

// static void	tic_tac(int usleep_time, int duration, std::string color)
// {
// 	for (int i = 0; i < duration; i++)
// 	{
// 		std::cout << color << "↓" << NC << std::endl;
// 		usleep(usleep_time);
// 	}
// }

// int main(void) {
// // {
// // 		// Heap allocation
// // 		const AAnimal *dog = new Dog();
// // 		tic_tac(500000, 2, GREEN);
// // 		const AAnimal *cat = new Cat();
// // 		tic_tac(500000, 2, GREEN);
// // 		delete dog;
// // 		tic_tac(500000, 2, GREEN);
// // 		delete cat;
// // 		tic_tac(500000, 5, GREEN);
// // 	}
// // 	{
// // 		// Stack allocation
// // 		Dog dog;
// // 		tic_tac(500000, 2, RED);
// // 		Cat cat;
// // 		tic_tac(500000, 2, RED);
// // 		Cat cat2(cat); // Copy constructor
// // 		tic_tac(500000, 5, RED);
// // 	}
// 	{
// 		// Array of pointers to AAnimal
// 		AAnimal *AAnimals[N];
// 		for (int i = 0; i < N; i++) {
// 			tic_tac(500000, 2, CYAN);
// 			if (i % 2 == 0)
// 				AAnimals[i] = new Dog();
// 			else
// 				AAnimals[i] = new Cat();
// 		}
// 		for (int i = 0; i < N; i++) {
// 			tic_tac(500000, 2, CYAN);
// 			AAnimals[i]->makeSound();
// 			tic_tac(500000, 2, CYAN);
// 			delete AAnimals[i];
// 		}
// 		tic_tac(500000, 2, ORANGE);
// 	}
// 	// {
// 	// 	Dog basic;
// 	// 	tic_tac(500000, 2, ORANGE);
// 	// 	{  
// 	// 		Dog tmp = basic ;
// 	// 	}
// 	// 	tic_tac(500000, 2, ORANGE);
// 	// }
// 	return (0);
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}