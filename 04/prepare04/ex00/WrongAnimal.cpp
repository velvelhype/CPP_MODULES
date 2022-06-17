#include "WrongAnimal.hpp"

//can forms
//==default constructor==
WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal def con revoked" << std::endl;
}
//==copy constructor==
WrongAnimal::WrongAnimal(WrongAnimal &src)
{
	*this = src;
	std::cout << "WrongAnimal copy con revoked" << std::endl;
}
//==destructor==
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal down!" << std::endl;
};
//==assignation overload==
WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this == &src)
		return (*this);
	_type = src._type;
	return (*this);
};

std::string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WROOOONG ANIMAAAAL!" << std::endl;
};
