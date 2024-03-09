#include <iostream>

// Defini��o de uma classe gen�rica usando um template
template <typename T>
class Caixa {
private:
    T conteudo;

public:
    Caixa(T conteudo) : conteudo(conteudo) {}

    // M�todo para obter o conte�do da caixa
    T getConteudo() const {
        return conteudo;
    }
};
