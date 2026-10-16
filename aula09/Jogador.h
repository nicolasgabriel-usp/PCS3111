#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>
#include <string>

using namespace std;

class Jogador {
public:
    Jogador(string nome, int hpMax, int forca);
    virtual ~Jogador();

    string getNome();
    int getHpMax();
    int getForca();

    int atacar(Jogador* j);
    int defender(int dano);
    void mostrarAtributos();

protected:
    string nome;
    int hpMax;
    int hp;
    int forca;
};

#endif