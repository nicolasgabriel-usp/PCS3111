#include <iostream>

using namespace std;

class Personagem {
    // Getters
    string getNome();
    int getHp();
    int getForca();

    // Setters
    void setForca(int novaForca);

    // Outros métodos
    void iniciar(string nome, int hp, int forca);
    int atacar(Personagem* p);
    int defender(int dano);
    bool estaVivo();
    void mostrarAtributos();

    string nome;
    int hp;
    int forca;
};

void Personagem::iniciar(std::string nome, int hp, int forca) {
    this->nome = nome;
    this->hp = hp;
    this->forca = forca;
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
    cout << "HP: " << hp << endl;
    cout << "Forca: " << forca << endl;
}

/**
 * Implementar as funcoes teste
 **/
void teste1() {
    // IMPLEMENTE seguindo o enunciado
}

void teste2() {
    // IMPLEMENTE seguindo o enunciado
}