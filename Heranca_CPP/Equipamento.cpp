#include "Equipamento.h"
#include <iostream>
#include <string>
using namespace std;

Equipamento::Equipamento(){
	this->fabricante = "";
	this->nome = "";
	this->preco = 0;
} 

Equipamento::Equipamento(const string & nome, const string & fabricante, float preco){
	this->nome = nome;
	this->fabricante = fabricante;
	this->preco = preco;
}

void Equipamento::setName(const string & name){
	this->nome = name;
}

void Equipamento::setFabricante(const string & fabricante){
	this->fabricante = fabricante;
} 

void Equipamento::setPreco(float preco){
	this->preco = preco;
}

string Equipamento::getName(){
	return nome;
} 

string Equipamento::getFabricante(){
	return fabricante;
}

float Equipamento::getPreco(){
	return preco;
}

