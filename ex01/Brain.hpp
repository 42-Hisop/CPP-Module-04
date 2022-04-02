#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private :
		std::string _ideas[100];
	public :
		Brain();
		Brain(const Brain &src);
		~Brain();

		Brain &operator=(const Brain &other);

		std::string const &getIdea(int index) const;
};

#endif
