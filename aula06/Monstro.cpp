#include "Monstro.h"

Monstro::Monstro(std::string nome, int nivel) 
    : Personagem(nome, 15 * nivel, 5 * nivel) {
}

Monstro::~Monstro() {
}

void Monstro::ataqueEspecial(Personagem* p) {
    atacar(p);
    atacar(p);
}