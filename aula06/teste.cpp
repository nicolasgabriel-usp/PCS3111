#include "Personagem.h"
#include "Monstro.h"
#include "Jogo.h"
#include <iostream>

void teste1() {
    Personagem* tav = new Personagem("Tav", 200, 30);
    
    Monstro* goblin = new Monstro("Goblin", 5);
    
    tav->atacar(goblin);
    
    goblin->atacar(tav);
    
    goblin->ataqueEspecial(tav);
    
    tav->mostrarAtributos();
    goblin->mostrarAtributos();
    
    delete tav;
    delete goblin;
}

void teste2() {
    Personagem* tav = new Personagem("Tav", 200, 30);
    Monstro* goblin = new Monstro("Goblin", 5);
    
    Monstro* gigante = new Monstro("Gigante", 4);
    
    // 3. Crie dois jogos
    Jogo* jogo1 = new Jogo();
    Jogo* jogo2 = new Jogo();
    
    jogo1->setJogador(tav);
    jogo1->adicionarMonstro(goblin);
    jogo1->adicionarMonstro(gigante);
    
    jogo2->setJogador(goblin);
    jogo2->adicionarMonstro(gigante);
    
    jogo1->jogar();
    jogo2->jogar();
    
    delete tav;
    delete goblin;
    delete gigante;
    delete jogo1;
    delete jogo2;
}