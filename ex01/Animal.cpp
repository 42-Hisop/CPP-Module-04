#include "Animal.hpp"

Animal::Animal(void) : _type("noname")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Animal type constructor called" << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound ... ?" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

