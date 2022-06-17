#include "Dog.hpp"
#include "log.hpp"

Dog::Dog()
{
	_type = "dog";
}

Dog::Dog(Dog &src)
{
	log("Dog copy con");
	*this = src;
}

Dog::~Dog()
{
	log("Dog dest");
}

Dog & Dog::operator=(Dog &src)
{
	log("Dog = ovl");
	_type = src._type;
	return (*this);
}

void	Dog::makeSound() const
{
	log("DOOOG!");
}
