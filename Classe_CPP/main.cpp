#include <iostream>
using namespace std;
#include "Jogo.h"

int main(){
	string game;
	float preco;
	
	cout << "Informe o nome do jogo que comprou: ";
	cin >> game;
	
	cin.ignore(); //Limpando o buffer;
    
	cout << "Infomr o preco que pagou nesse jogo: ";
	cin >> preco;
	
    Jogo gow = Jogo(game, preco);
    gow.jogar(5);
    gow.exibir();
    
    return 0;
};
