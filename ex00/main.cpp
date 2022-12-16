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

int	main( void )
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();
	delete meta;
	delete cat;
	delete dog;


	const WrongAnimal* metaWrong = new WrongAnimal();
	const WrongAnimal* catWrong = new WrongCat();

	std::cout << catWrong->getType() << std::endl;
	metaWrong->makeSound();
	catWrong->makeSound();
	delete metaWrong;
	delete catWrong;
}
