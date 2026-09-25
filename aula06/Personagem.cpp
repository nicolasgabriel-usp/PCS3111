#include "Personagem.h"
#include <iostream>
using namespace std;

Personagem::Personagem(std::string nome, int hp, int forca) {
    this->nome = nome;
    this->hp = hp;
    this->forca = forca;
}

Personagem::~Personagem(){}

void Personagem::mostrarAtributos() {
    cout << "Nome: " << nome << endl;
    cout << "HP: " << hp << endl;
    cout << "Forca: " << forca << endl;
}

int Personagem::getHp(){
    return hp;
}

int Personagem::getForca(){
    return forca;
}

string Personagem::getNome(){
    return nome;
}

void Personagem::atacar(Personagem* p){
    p->defender(forca);
}

void Personagem::defender(int forca){
    hp -= forca;
    if(hp < 0)
        hp = 0;
}