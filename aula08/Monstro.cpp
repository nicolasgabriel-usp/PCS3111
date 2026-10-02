#include "Monstro.h"
#include <cmath>
#include <string>

int Monstro::quantidade = 0;

Monstro::Monstro(string nome, int nivel) 
    : Personagem(nome, 10 * nivel, 5 * nivel), nivel(nivel) {}

Monstro::Monstro(int nivel) 
    : Personagem("Monstro " + to_string(++quantidade), 10 * nivel, 5 * nivel), nivel(nivel) {}

int Monstro::getNivel() {
    return nivel;
}

int Monstro::getQuantidade() {
    return quantidade;
}

int Monstro::atacar(Personagem* p) {
    double danoCalculado = getForca();
    
    if (this->nivel >= 5) {
        danoCalculado = 1.5 * getForca();
    }
    
    int danoFinal = static_cast<int>(floor(danoCalculado));
    return p->defender(danoFinal);
}