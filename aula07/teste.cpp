#include "Guerreiro.h"
#include "Monstro.h"
#include "Jogo.h"
#include <iostream>

void teste1(){
    Guerreiro* theo = new Guerreiro("Theo", 100, 8);
    Monstro* victor = new Monstro("Victor", 4);

    victor->atacar(theo);
    victor->atacar(theo);
    victor->atacar(theo);

    theo->atacar(victor);
    theo->atacar(victor);
    theo->atacar(victor);

    theo->atacar(victor, 1.35);

    theo->imprimir();
    victor->imprimir();

    delete theo;
    delete victor;
}

void teste2(){
    Guerreiro* g = new Guerreiro("Theo", 100, 20);
    Monstro* m1 = new Monstro("Victor", 2);
    Monstro* m2 = new Monstro("Chefe", 4);

    Jogo jogo;
    jogo.setJogador(g);
    jogo.adicionarMonstro(m1);
    jogo.adicionarMonstro(m2);

    jogo.jogar();

    delete g;
    delete m1;
    delete m2;
}
