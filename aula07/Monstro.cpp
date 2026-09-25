#include "Monstro.h"

Monstro::Monstro(string nome, int nivel): Personagem(nome, nivel*15, nivel*5){
    this->nivel = nivel;
}

Monstro::~Monstro(){}

void Monstro::ataqueEspecial(Personagem* p){
    atacar(p);
    atacar(p);
}

int Monstro::getNivel(){
    return nivel;
}