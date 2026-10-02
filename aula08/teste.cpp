#include <iostream>
#include "Jogador.h"
#include "Monstro.h"

using namespace std;

void teste1() {
    Jogador* steve = new Jogador("Steve", 100, 50);
    Monstro* zumbi = new Monstro("Zumbi", 2);
    Monstro* creeper = new Monstro("Creeper", 6);

    zumbi->atacar(steve);
    creeper->atacar(steve);
    steve->mostrarAtributos();

    delete steve;
    delete zumbi;
    delete creeper;
}

void teste2() {
    Monstro* m1 = new Monstro(2);
    Monstro* m2 = new Monstro(5);

    cout << Monstro::getQuantidade() << " monstros foram criados:" << endl;
    m1->mostrarAtributos();
    m2->mostrarAtributos();

    delete m1;
    delete m2;
}