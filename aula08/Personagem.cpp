#include "Personagem.h"
#include <iostream>

using namespace std;

Personagem::Personagem(string nome, int hpMax, int forca) : nome(nome), hpMax(hpMax), hp(hpMax), forca(forca) {}

Personagem::~Personagem() {}

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