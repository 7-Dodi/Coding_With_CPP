#include <iostream>

class Numero {
private:
    int valor;

public:
    Numero(int valor) {
        this->valor = valor;
    }

    // Sobrecarga do operador de adição (+)
    Numero operator+(const Numero& other) const {
        return Numero(valor + other.valor);
    }

    // Método para exibir o valor
    void display() const {
        std::cout << "Valor: " << valor << std::endl;
    }
};
