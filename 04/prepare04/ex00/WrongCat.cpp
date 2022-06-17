#include "WrongCat.hpp"
#include "log.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &src)
{
	log("WrongCat copy con");
	*this = src;
}

WrongCat::~WrongCat()
{
	log("WrongCat dest");
}

WrongCat & WrongCat::operator=(WrongCat &src)
{
	log("WrongCat = ovl");
	_type = src._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	log("WROONG CAAAT!");
}