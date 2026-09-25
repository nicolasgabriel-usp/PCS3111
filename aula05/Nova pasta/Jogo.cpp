#include "Jogo.h"
#include <iostream>
#include <string>

using namespace std;

Jogo::Jogo(Personagem* jogador, int dificuldade) {
    this->jogador = jogador;
    this->quantidade = 2 * dificuldade;
    this->monstros = new Personagem*[this->quantidade];

    for (int i = 0; i < this->quantidade; i++) {
        string nomeMonstro = "Monstro " + to_string(i + 1);
        int hpMonstro = 10 * dificuldade;
        int forcaMonstro = 5 * dificuldade;

        this->monstros[i] = new Personagem(nomeMonstro, hpMonstro, forcaMonstro);
    }
}

Jogo::~Jogo() {
    for (int i = 0; i < this->quantidade; i++) {
        delete this->monstros[i];
    }
    delete[] this->monstros;
    delete this->jogador;
}

int Jogo::getQuantidadeDeMonstros() {
    return quantidade;
}

Personagem** Jogo::getMonstros() {
    return monstros;
}

Personagem* Jogo::getJogador() {
    return jogador;
}

void Jogo::lutar(Personagem* monstro) {
    Personagem* atacante1 = jogador;
    Personagem* atacante2 = monstro;

    while (jogador->estaVivo() && monstro->estaVivo()) {
        if (atacante1->estaVivo()) {
            atacante1->atacar(atacante2);
        }

        if (atacante2->estaVivo()) {
            atacante2->atacar(atacante1);
        }
    }
}

int Jogo::jogar() {
    if (jogador == nullptr || quantidade <= 0) {
        return 0;
    }

    int monstrosDerrotados = 0;

    for (int i = 0; i < quantidade; i++) {
        lutar(monstros[i]);
        if (jogador->estaVivo()) {
            monstrosDerrotados++;
        } else {
            return monstrosDerrotados;
        }
    }
    return monstrosDerrotados;
}