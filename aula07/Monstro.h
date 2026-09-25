#ifndef MONSTRO_H
#define MONSTRO_H

#include <string>
#include "Personagem.h"

using namespace std;

class Monstro: public Personagem {
    int nivel;
public:
    Monstro(string nome, int nivel);
    virtual ~Monstro();

    int getNivel();
    void ataqueEspecial(Personagem* p);
};

#endif // MONSTRO_H