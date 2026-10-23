#include "Jogador.h"

Jogador::Jogador(string nome, int hpMax, int forca) : Personagem(nome, hpMax, forca) {}

int Jogador::atacar(Personagem* p) {
    return p->defender(forca);
}