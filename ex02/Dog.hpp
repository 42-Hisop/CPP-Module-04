#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private :
		Brain	*_brain;
	public :
		Dog(void);
		Dog(const Dog &src);
		
		Dog	&operator=(const Dog &other);
		
		virtual ~Dog();
		
		void makeSound() const;
		Brain *getBrain(void) const;
};

#endif
