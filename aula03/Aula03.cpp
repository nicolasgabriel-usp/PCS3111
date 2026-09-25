#include <string>
#include <cmath>
#include <string>
#include <iostream>

using namespace std;

class Personagem {
    public:
        string nome;
        int forca;
        double armadura;
        int hp, hpMax;

        int atacar(Personagem* p);
        int defender(int dano);

        bool estaVivo();
};

int Personagem::defender(int dano){
    int danoEfetivo = (int) floor((dano * (1 - armadura)));
    hp -= danoEfetivo;
    if (hp < 0){
        hp = 0;
    }
    return danoEfetivo;
}

int Personagem::atacar(Personagem* p){
    int danoBruto;
    if (hp <= hpMax/5.0){
        danoBruto = 2 * forca;
    } else {
        danoBruto = (int) floor(1.5 * forca);
    }

    int danoEfetivo = p->defender(danoBruto);

    return danoEfetivo;
}

bool Personagem::estaVivo(){
    if (hp > 0){
        return true;
    }
    return false;
}

class Jogo{
    public:
        Personagem* personagem1 = nullptr;
        Personagem* personagem2 = nullptr;

        bool adicionar(Personagem* p);
        Personagem* duelar();
};

bool Jogo::adicionar(Personagem* p){
    if (personagem1 == nullptr){
        personagem1 = p;
        return true;
    } else if (personagem2 == nullptr){
        personagem2 = p;
        return true;
    }
    return false;
}


void teste1(){
    Personagem* geralt = new Personagem();
    geralt->nome = "Geralt";
    geralt->forca = 9;
    geralt->armadura = 0.25;
    geralt->hp = 100;
    geralt->hpMax = 100;

    Personagem* eredin = new Personagem();
    eredin-> nome = "Eredin";
    eredin-> forca = 5;
    eredin-> armadura = 0.30;
    eredin-> hp = 150;
    eredin-> hpMax = 150;

    int danoEfetivo = geralt->atacar(eredin);

    cout << "O personagem " << geralt->nome << "atacou" << eredin->nome << " e deu" << danoEfetivo << " de dano. Ele ficou entao com " << eredin->hp << "/" << eredin->hpMax << endl;

    delete geralt;
    delete eredin;
}

void teste2(){
    // Implemente a funcao teste do exercicio 02 de acordo com o enunciado
}

int main(){
    teste1();
    return 0;
}