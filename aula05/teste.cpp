#include <iostream>
#include "Personagem.h"
#include "Jogo.h"

using namespace std;

void teste1() {
    Personagem* link = new Personagem("Link", 100, 50);
    Personagem* ganon = new Personagem("Ganon", 200, 70);
    link->atacar(ganon);
    ganon->mostrarAtributos();
    delete link;
    delete ganon;
}

void teste2() {
    Personagem* link = new Personagem("Link", 100, 50);
    Jogo* jogo = new Jogo(link, 6);
    jogo->jogar();
    delete jogo;
}