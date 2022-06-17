#ifndef DOG_HPP
# define  DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
    public:
		//can forms
        //==default constructor==
		Dog();
        //==copy constructor==
		Dog(Dog &src);
        //==destructor==
		~Dog();
        //==assignation overload==
		Dog &operator=(Dog &src);

		virtual void makeSound() const;
};

#endif