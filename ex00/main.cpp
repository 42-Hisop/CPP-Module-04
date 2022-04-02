#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* f = new WrongCat();

	std::cout << "j = " << j->getType() << " " << std::endl;
	std::cout << "i = " << i->getType() << " " << std::endl;
	std::cout << "f = " << f->getType() << " " << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();
	f->makeSound();

	delete meta;
	delete j;
	delete i;
	delete f;
	
	return 0;
}
