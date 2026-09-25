#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>

using namespace std;

class Personagem {
public:
    Personagem(string nome, int hpMax, int forca);
    string getNome();
    int getHpMax();
    int getHp();
    int getForca();
    int atacar(Personagem* p);
    int defender(int dano);
    bool estaVivo();
    void mostrarAtributos();

private:
    string nome;
    int hpMax;
    int hp;
    int forca;
};

#endif // PERSONAGEM_H