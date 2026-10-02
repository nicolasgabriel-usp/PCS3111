#ifndef MONSTRO_H
#define MONSTRO_H

#include <iostream>
#include <string>
#include "Personagem.h"

using namespace std;

class Monstro : public Personagem {
public:
    Monstro(string nome, int nivel);
    Monstro(int nivel); 
    
    int getNivel();
    static int getQuantidade(); 
    int atacar(Personagem* p) override;

private:
    int nivel;
    static int quantidade; 
};

#endif