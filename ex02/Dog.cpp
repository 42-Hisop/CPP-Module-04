#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "woof woof" << std::endl;
	return ;
}

Brain	*Dog::getBrain(void) const
{
	return this->_brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}
