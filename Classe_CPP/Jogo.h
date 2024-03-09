#include <iostream>
#include <string>
using std::string;

class Jogo
{
private:
    //Atributos
    string name;
    float preco;
    int horas;
    float custo;

	void calcular()
    {
        if (horas > 0)
        {
            custo = preco / horas;
        }
    }
    
public:
    Jogo(); //Constructor
    Jogo(const string &title, float valor = 0); //Constructor
    ~Jogo(); //Destructor

    //Declaração de métodos
    void edit(float valor);
    void jogar(int time);
    void exibir();
};
