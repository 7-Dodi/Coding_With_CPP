#ifndef GATO_H
#define GATO_H

#include <iostream>
#include "Animal.h"

class Gato: public Animal {
	public:
		void fazerSom() override{
			std::cout << "Gato miando\n";
		}
};

#endif
