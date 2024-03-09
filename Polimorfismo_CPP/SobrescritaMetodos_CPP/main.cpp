#include <iostream>
#include "Animal.h"
#include "Gato.h"
#include "Cachorro.h"

int main() {
	Animal animal;
	animal.fazerSom();
	
	Cachorro dog;
	dog.fazerSom();
	
	Gato cat;
	cat.fazerSom();
	
	return 0;
}
