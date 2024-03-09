#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include "Animal.h"

class Cachorro: public Animal {
	public:
		void fazerSom() override{
			std::cout << "Cachorro latindo\n";
		}
};

#endif
