#include "Personagem.h"
#include <iostream>

using namespace std;

Personagem::Personagem(string nome, int hpMax, int forca) {
    this->nome = nome;
    this->hpMax = hpMax;
    this->forca = forca;
    this->hp = hpMax; 
}

string Personagem::getNome() {
    return nome;
}

int Personagem::getHpMax() {
    return hpMax;
}

int Personagem::getHp() {
    return hp;
}

int Personagem::getForca() {
    return forca;
}

int Personagem::atacar(Personagem* p) {
    return p->defender(forca);
}

int Personagem::defender(int dano) {
    int danoEfetivo = min(dano, hp);
    hp -= dano;
    if (hp < 0) hp = 0;
    return danoEfetivo;
}

bool Personagem::estaVivo() {
    return hp > 0;
}

void Personagem::mostrarAtributos() {
    cout << "Nome: " << nome << endl;
    cout << "HP: " << hp << "/" << hpMax << endl;
    cout << "Forca: " << forca << endl;
}