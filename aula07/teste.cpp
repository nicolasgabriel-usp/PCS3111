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
    Guerreiro* theo = new Guerreiro("Theo", 100, 8);
    Monstro* victor = new Monstro("Victor", 4);

    Personagem* jorge = new Personagem("Jorge", 100, 8);

    Monstro* fabio = new Monstro("Fabio", 4);

    Jogo* jogo1 = new Jogo();
    Jogo* jogo2 = new Jogo();

    jogo1->setJogador(jorge);
    jogo1->adicionarMonstro(fabio);

    jogo2->setJogador(theo);
    jogo2->adicionarMonstro(victor);

    jogo1->jogar();
    jogo2->jogar();

    delete theo;
    delete victor;
    delete jorge;
    delete fabio;
    delete jogo1;
    delete jogo2;
}