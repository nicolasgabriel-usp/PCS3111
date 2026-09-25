#ifndef JOGO_H
#define JOGO_H

#include "Personagem.h"
#include "Monstro.h"

#define MAXIMO_DE_MONSTROS 10

class Jogo {
    Personagem* jogador = nullptr;
    Monstro** monstros = nullptr;
    int quantidade = 0;
public:
    Jogo();
    virtual ~Jogo();
    
    void setJogador(Personagem* p);
    void adicionarMonstro(Monstro* monstro);
    int jogar();
    void lutar(Monstro* monstro);
};

#endif