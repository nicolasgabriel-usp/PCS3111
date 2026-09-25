#ifndef JOGO_H
#define JOGO_H

#include "Personagem.h"
#include "Monstro.h"

#define MAXIMO_DE_MONSTROS 10

class Jogo {
private:
    Personagem* jogador = nullptr;
    Monstro** monstros = new Monstro*[MAXIMO_DE_MONSTROS];
    int quantidade = 0;

public:
    ~Jogo() {
        delete[] monstros;
    }

    void setJogador(Personagem* p);
    void adicionarMonstro(Monstro* monstro);
    int jogar();
    void lutar(Monstro* monstro);
};

#endif