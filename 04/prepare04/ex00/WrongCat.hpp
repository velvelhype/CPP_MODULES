#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
	// 	//can forms
      //==default constructor==
		WrongCat();
        //==copy constructor==
		WrongCat(WrongCat &src);
        // //==destructor==
		~WrongCat();
        // //==assignation overload==
		WrongCat &operator=(WrongCat &src);

	virtual void makeSound() const;
};

#endif