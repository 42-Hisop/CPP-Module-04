#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
 	const Animal* j = new Dog();
 	const Animal* i = new Cat();
 	delete j;
	delete i;
  
 	Animal	*a[4];

	for(int i = 0; i < 4; i++) {
		if (i < 2) {
			a[i] = new Cat();
		}
		else {
			a[i] = new Dog();
		}
	}
	for(int i=0; i<4; i++) {
		a[i]->makeSound();
	}
	
	for(int i=0; i<4; i++) {
		delete a[i];
	}

	return 0;
}
