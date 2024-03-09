#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal{
	public:
		virtual void fazerSom(){
			std::cout << "Animal faz som\n";
		}
};

#endif
