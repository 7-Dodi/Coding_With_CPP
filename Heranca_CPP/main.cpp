#include <iostream>
#include "Motor.h" 

using namespace std;

int main() {
    string nome, fabricante;
    float preco, potencia, velocidade;

    cout << "Informe o nome do motor: ";
    getline(cin, nome);

    cout << "Informe o fabricante do motor: ";
    getline(cin, fabricante);

    cout << "Informe o preco do motor: ";
    cin >> preco;

    cout << "Informe a potencia do motor: ";
    cin >> potencia;

    cout << "Informe a velocidade do motor: ";
    cin >> velocidade;

    Motor motor(nome, fabricante, preco, potencia, velocidade);

    cout << "\nInformacoes do motor criado:\n";
    cout << "Nome: " << motor.getName() << endl;
    cout << "Fabricante: " << motor.getFabricante() << endl;
    cout << "Preco: " << motor.getPreco() << endl;
    cout << "Potencia: " << motor.getPotencia() << endl;
    cout << "Velocidade: " << motor.getVelocidade() << endl;

    return 0;
}

