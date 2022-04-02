#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "e o ong" << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}
