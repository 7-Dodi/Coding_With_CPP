#include <iostream>
#include <string>
using namespace std;

class Equipamento {
	private:
		string nome;
		string fabricante;
		float preco;
	
	public:
		Equipamento();
		Equipamento(const string & nome, const string & fabricante, float preco = 0 );
		void setName( const string & name);
		void setFabricante( const string & fabricante);
		void setPreco(float preco);
		string getName();
		string getFabricante();
		float getPreco();
};
