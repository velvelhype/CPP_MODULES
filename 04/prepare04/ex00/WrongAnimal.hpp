#ifndef WRONGANIMAL_HPP
# define  WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    public:
		//can forms
        //==default constructor==
		WrongAnimal();
        //==copy constructor==
		WrongAnimal(WrongAnimal &src);
        //==destructor==
		virtual ~WrongAnimal();
        //==assignation overload==
		WrongAnimal &operator=(const WrongAnimal &src);

		//unique
		virtual void makeSound() const;
		std::string getType() const;

	protected:
		std::string _type;
};

#endif