#ifndef JOGO_H
#define JOGO_H

#include "Personagem.h"

class Jogo {
public:
    Jogo(Personagem* jogador, int dificuldade);

    ~Jogo();

    int getQuantidadeDeMonstros();
    Personagem** getMonstros();
    Personagem* getJogador();

    void lutar(Personagem* monstro);
    int jogar();
private:
    Personagem* jogador;
    Personagem** monstros;
    int quantidade;
};

#endif 