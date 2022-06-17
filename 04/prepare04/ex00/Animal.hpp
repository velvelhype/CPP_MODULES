#ifndef ANIMAL_HPP
# define  ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    public:
		//can forms
        //==default constructor==
		Animal();
        //==copy constructor==
		Animal(Animal &src);
        //==destructor==
		virtual ~Animal();
        //==assignation overload==
		Animal &operator=(const Animal &src);

		//unique
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string _type;
};

#endif