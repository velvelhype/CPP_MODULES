#include "Cat.hpp"
#include "log.hpp"

Cat::Cat()
{
	_type = "cat";
}

Cat::Cat(Cat &src)
{
	log("Cat copy con");
	*this = src;
}

Cat::~Cat()
{
	log("Cat dest");
}

Cat & Cat::operator=(Cat &src)
{
	log("Cat = ovl");
	_type = src._type;
	return (*this);
}

void	Cat::makeSound() const
{
	log("CAAAT!");
}