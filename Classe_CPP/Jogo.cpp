#include "Jogo.h"
#include <iostream>
using namespace std;

Jogo::Jogo()
{
	name = "";
	preco = 0;
	custo = 0;
	horas = 0;
}

Jogo::Jogo(const string &title, float valor)
{
     name = title;
     preco = valor;
     horas = 0;
     custo = 0;
}

Jogo::~Jogo()
{
	//Vazio
} 

 void Jogo::edit(float valor)
 {
     preco = valor;
     calcular();
 }

 void Jogo::jogar(int time)
 {
     horas = horas + time;
     calcular();
 }

 void Jogo::exibir(){
     std::cout << name << " R$"
         << preco << " "
         << horas << "h = R$"
         << custo << "/h\n";
}

