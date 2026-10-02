#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include "Personagem.h"

using namespace std;

class Jogador : public Personagem {
public:
    Jogador(string nome, int hpMax, int forca);
    int atacar(Personagem* p) override;
};

#endif