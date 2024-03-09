#include <iostream>
#include <string>
#include "Caixa.h"

using namespace std;

int main() {
	int num1;
	string word;
	
	//Entrada de dados
	cout << "Informe uma palavra para a caixa de palavras: ";
    getline(cin, word);
	
	cout << "Informe um numero para a caixa de inteiros: ";
	cin >> num1;
	
	// Criando uma caixa de strings
    Caixa<string> caixaString(word);
    cout << "\nConteudo da caixa de strings: " << caixaString.getConteudo();
	
	// Criando uma caixa de inteiros
    Caixa<int> caixaInt(num1);
    cout << "\nConteudo da caixa de inteiros: " << caixaInt.getConteudo();
	
	return 0;
}
