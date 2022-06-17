#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* d = new Dog();
const Animal* c = new Cat();
std::cout<< "TYPE::" << d->getType() << " " << std::endl;
std::cout<< "TYPE::" << c->getType() << " " << std::endl;
meta->makeSound();
d->makeSound();
c->makeSound(); //will output the cat sound!

const WrongAnimal* wmeta = new WrongAnimal();
const WrongAnimal* w = new WrongCat();
std::cout<< "TYPE::" << w->getType() << " " << std::endl;
wmeta->makeSound();
w->makeSound(); //will output the cat sound!

return 0;
}