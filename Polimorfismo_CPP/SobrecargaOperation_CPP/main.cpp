#include <iostream>
#include "Numero.h"

using namespace std;

int main() {
	int number1, number2;
	
	cout << "Informe um primeiro numero: ";
	cin >> number1;
	
	cout << "Informe um segundo numero: ";
	cin >> number2;
	
	//Adicionando números aos objetos
	Numero num1(number1);
    Numero num2(number2);

    // Adicionando dois números usando o operador sobrecarregado de adição
    Numero result = num1 + num2;

    // Exibindo o resultado
    result.display();
	
	return 0;
}
