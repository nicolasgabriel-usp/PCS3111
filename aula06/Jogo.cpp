#include "Jogo.h"
#include <iostream>
using namespace std;

void Jogo::setJogador(Personagem* p) {
    jogador = p;
}

void Jogo::adicionarMonstro(Monstro* monstro) {
    if (quantidade < MAXIMO_DE_MONSTROS) {
        for (int i = 0; i < quantidade; i++) {
            if (monstros[i] == monstro)
                return;
        }
        monstros[quantidade++] = monstro;
    }
}

void Jogo::lutar(Monstro* monstro) {
    int contadorAtaques = 0;
    while (jogador->getHp() > 0 && monstro->getHp() > 0) {
        contadorAtaques++;
        if (contadorAtaques % 3 == 0) {
            monstro->ataqueEspecial(jogador);
        } else {
            monstro->atacar(jogador);
        }

        if (jogador->getHp() > 0) {
            jogador->atacar(monstro);
        }
    }
}

int Jogo::jogar() {
    if (jogador == nullptr || quantidade == 0) {
        cout << "O jogo nao esta pronto!" << endl;
        return 0;
    }
    int numeroDeMonstrosDerrotados = 0;
    for (int i = 0; i < quantidade; i++) {
        lutar(monstros[i]);
        if (jogador->getHp() <= 0) {
            cout << "FIM DE JOGO! " << jogador->getNome() << " foi derrotado por " << monstros[i]->getNome() << "." << endl;
            return numeroDeMonstrosDerrotados;
        }
        numeroDeMonstrosDerrotados++;
    }
    cout << "Parabens! Voce sobreviveu e derrotou todos os monstros!" << endl;
    return numeroDeMonstrosDerrotados;
}