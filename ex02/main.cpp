#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << "j = " << j->getType() << " " << std::endl;
	std::cout << "i = " << i->getType() << " " << std::endl;

//	meta->makeSound();
	i->makeSound();
	j->makeSound();

	delete j;
	delete i;
	
	return 0;
}
