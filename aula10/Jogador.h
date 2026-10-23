#ifndef JOGADOR_H
#define JOGADOR_H

#include "Personagem.h"

class Jogador : public Personagem {
public:
    Jogador(string nome, int hpMax, int forca);
    
    virtual int atacar(Personagem* p);
};

#endif