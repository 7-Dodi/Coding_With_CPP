// Motor.h
#ifndef MOTOR_H
#define MOTOR_H

#include "Equipamento.h" // Inclua a definição da classe Equipamento

class Motor : public Equipamento {
private:
    float potencia;
    float velocidade;

public:
    Motor();
    Motor(const std::string& nome, const std::string& fabricante, float preco, float potencia, float velocidade);
    void setPotencia(float potencia);
    void setVelocidade(float velocidade);
    float getPotencia();
    float getVelocidade();
};

#endif // MOTOR_H
