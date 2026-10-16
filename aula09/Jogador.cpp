#include "Jogador.h"
#include "JogadorNocauteado.h"
#include <iostream>
#include <stdexcept>
#include <algorithm>

using namespace std;

Jogador::Jogador(string nome, int hpMax, int forca) : nome(nome), hpMax(hpMax), hp(hpMax), forca(forca) {
    if (this->hpMax <= 0) {
        throw new invalid_argument("Vida invalida");
    } else if (this->forca <= 0){
        throw new invalid_argument("Forca invalida");
    }
}

Jogador::~Jogador() {}

string Jogador::getNome() {
    return nome;
}

int Jogador::getHpMax() {
    return hpMax;
}

int Jogador::getForca() {
    return forca;
}

int Jogador::atacar(Jogador* j) {
    return j->defender(forca);
}

int Jogador::defender(int dano) {
    if (hp <= 0) {
        throw new JogadorNocauteado("Jogador ja esta nocauteado", this);
    }

    int danoEfetivo = min(dano, hp);
    hp -= danoEfetivo;
    return danoEfetivo;
}

void Jogador::mostrarAtributos() {
    cout << "Nome: " << nome << endl;
    cout << "HP: " << hp << "/" << hpMax << endl;
    cout << "Forca: " << forca << endl;
}