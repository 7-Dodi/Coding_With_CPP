#include <iostream>

// Definição de uma classe genérica usando um template
template <typename T>
class Caixa {
private:
    T conteudo;

public:
    Caixa(T conteudo) : conteudo(conteudo) {}

    // Método para obter o conteúdo da caixa
    T getConteudo() const {
        return conteudo;
    }
};
