#include "Motor.h"
#include <iostream>
#include <string>
using namespace std;

Motor::Motor(){
	this->setName("");
	this->setFabricante("");
	this->setPreco(0);
	this->potencia = 0;
	this->velocidade = 0;
} 

Motor::Motor(const std::string& nome, const std::string& fabricante, float preco, float potencia, float velocidade){
	this->setName(nome);
	this->setFabricante(fabricante);
	this->setPreco(preco);
	this->potencia = potencia;
	this->velocidade = velocidade;
}

void Motor::setPotencia(float potencia){
	this->potencia = potencia;
}

void Motor::setVelocidade(float velocidade){
	this->velocidade = velocidade;
}

float Motor::getVelocidade(){
	return velocidade;
}

float Motor::getPotencia(){
	return potencia;
}
