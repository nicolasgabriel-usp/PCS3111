#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <string>

using namespace std;

class Personagem {
public:
    Personagem(string nome, int hpMax, int forca);
    virtual ~Personagem();

    string getNome();
    int getHpMax();
    int getHp();
    int getForca();

    virtual int atacar(Personagem* p) = 0;
    int defender(int dano);
    bool estaVivo();
    void mostrarAtributos();

private:
    string nome;
    int hpMax;
    int hp;
    int forca;
};

#endif