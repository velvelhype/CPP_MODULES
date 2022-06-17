#ifndef CAT_HPP
# define  CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
    public:
	// 	//can forms
      //==default constructor==
		Cat();
        //==copy constructor==
		Cat(Cat &src);
        // //==destructor==
		~Cat();
        // //==assignation overload==
		Cat &operator=(Cat &src);

	virtual void makeSound() const;
};

#endif