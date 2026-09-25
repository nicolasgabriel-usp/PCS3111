#ifndef MONSTRO_H
#define MONSTRO_H

#include "Personagem.h"
#include <string>

class Monstro : public Personagem {
public:
    Monstro(std::string nome, int nivel);
    virtual ~Monstro();
    void ataqueEspecial(Personagem* p);
};

#endif