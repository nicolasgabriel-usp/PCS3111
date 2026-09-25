#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "Personagem.h"

class Guerreiro: public Personagem {
private:
    int ataquesNaVida;  
    int contadorAtaques; 
    
public:
    Guerreiro(string nome, int hp, int forca);
    virtual ~Guerreiro();

    void atacar(Personagem* p) override;
    void atacar(Personagem* p, double critico);

    void imprimir() override;
};

#endif