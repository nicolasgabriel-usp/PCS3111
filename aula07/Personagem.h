#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using namespace std;

class Personagem {
public:
    Personagem(string nome, int hp, int forca);
    virtual ~Personagem();

    // Getters
    string getNome();
    int getHp();
    int getForca();

    virtual void imprimir();
    virtual void atacar(Personagem* p);
    void defender(int forca);

protected:
    string nome;
    int hp;
    int forca;
};

#endif