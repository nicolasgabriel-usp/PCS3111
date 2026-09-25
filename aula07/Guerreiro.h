#ifndef GUERREIRO_H
#define GUERREIRO_H
#include "Personagem.h"

class Guerreiro: public Personagem {
public:
    Guerreiro(string nome, int hp, int forca);
    virtual ~Guerreiro();

    void atacar(Personagem* p);
    void atacar(Personagem* p, double critico);

    void imprimir();
};

#endif