NAME = a.out
COMPILER = c++

WFLAG = -Wall -Werror -Wextra -std=c++98

SRC =	main.cpp Animal.cpp Dog.cpp Cat.cpp log.cpp \
	 WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(WFLAG) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all