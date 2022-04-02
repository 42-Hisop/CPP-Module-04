#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(const Animal &src);
		Animal(const std::string &type);
		
		Animal	&operator=(const Animal &other);
		
		virtual	~Animal();
		
		virtual void	makeSound() const = 0;
		std::string		getType(void) const;
};

#endif
