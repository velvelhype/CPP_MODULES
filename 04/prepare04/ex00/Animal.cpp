#include "Animal.hpp"

//can forms
//==default constructor==
Animal::Animal()
{
	std::cout << "animal def con revoked" << std::endl;
}
//==copy constructor==
Animal::Animal(Animal &src)
{
	*this = src;
	std::cout << "animal copy con revoked" << std::endl;
}
//==destructor==
Animal::~Animal()
{
	std::cout << "Animal down!" << std::endl;
};
//==assignation overload==
Animal & Animal::operator=(const Animal &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
};

std::string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	std::cout << "ANIMAAAAL!" << std::endl;
};
