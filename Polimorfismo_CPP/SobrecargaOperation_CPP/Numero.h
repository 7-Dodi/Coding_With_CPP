#include <iostream>

class Numero {
private:
    int valor;

public:
    Numero(int valor) {
        this->valor = valor;
    }

    // Sobrecarga do operador de adi��o (+)
    Numero operator+(const Numero& other) const {
        return Numero(valor + other.valor);
    }

    // M�todo para exibir o valor
    void display() const {
        std::cout << "Valor: " << valor << std::endl;
    }
};
