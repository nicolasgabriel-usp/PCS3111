#include "Guerreiro.h"
#include <iostream>
#include <cmath> 

using namespace std;

Guerreiro::Guerreiro(string nome, int hp, int forca) 
    : Personagem(nome, hp, forca), ataquesNaVida(0), contadorAtaques(0) {
}

Guerreiro::~Guerreiro() {
}

void Guerreiro::atacar(Personagem* p) {
    ataquesNaVida++;
    contadorAtaques++;

    if (contadorAtaques % 3 == 0) {
        p->defender(forca);
        p->defender(forca); 
    } else {
        p->defender(forca); 
    }
}

void Guerreiro::atacar(Personagem* p, double critico) {
    int dano = floor(forca * critico);
    p->defender(dano);
}

void Guerreiro::imprimir() {
    Personagem::imprimir();
    cout << "Ele eh um guerreiro e fez " << ataquesNaVida << " ataques normais em sua vida." << endl;
}