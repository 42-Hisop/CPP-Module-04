#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &src) : _brain(new Brain(*src._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "e o ong" << std::endl;
	return ;
}

Brain	*Cat::getBrain(void) const
{
	return this->_brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}
