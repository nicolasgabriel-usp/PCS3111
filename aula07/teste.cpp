#include "Personagem.h"
#include "Guerreiro.h"
#include "Monstro.h"
#include "Jogo.h"

void teste1(){
    // 1. Crie um guerreiro com nome de "Theo", hp de 100 e força de 8
    Guerreiro* theo = new Guerreiro("Theo", 100, 8);
    
    // 2. Crie um monstro com nome "Victor" e nível 4
    Monstro* victor = new Monstro("Victor", 4);

    // 3. Faça o monstro Victor atacar o guerreiro Theo três vezes, depois faça o guerreiro Theo atacar o monstro Victor três vezes
    victor->atacar(theo);
    victor->atacar(theo);
    victor->atacar(theo);

    theo->atacar(victor);
    theo->atacar(victor);
    theo->atacar(victor);

    // 4. Faça o guerreiro Theo atacar com um ataque crítico de 1.35x
    theo->atacar(victor, 1.35);

    // 5. Chame o método imprimir do guerreiro Theo e depois do monstro Victor
    theo->imprimir();
    victor->imprimir();

    // 6. Destrua os objetos na ordem em que foram criados
    delete theo;
    delete victor;
}

void teste2(){
    // 1. Crie os mesmos personagens do teste1
    Guerreiro* theo = new Guerreiro("Theo", 100, 8);
    Monstro* victor = new Monstro("Victor", 4);

    // 2. Crie um novo personagem, com nome de "Jorge", 100 de hp e 8 de força
    Personagem* jorge = new Personagem("Jorge", 100, 8);

    // 3. Crie um novo monstro, com nome "Fabio" e nível 4
    Monstro* fabio = new Monstro("Fabio", 4);

    // 4. Crie dois jogos
    Jogo* jogo1 = new Jogo();
    Jogo* jogo2 = new Jogo();

    // 5. No primeiro jogo criado, coloque o jogador como o personagem Jorge e adicione o monstro Fabio
    jogo1->setJogador(jorge);
    jogo1->adicionarMonstro(fabio);

    // 6. No segundo jogo criado, coloque o jogador como o guerreiro Theo e adicione o monstro Victor
    jogo2->setJogador(theo);
    jogo2->adicionarMonstro(victor);

    // 7. Chame o método jogar de cada jogo, na ordem em que foram criados
    jogo1->jogar();
    jogo2->jogar();

    // 8. Destrua os objetos na ordem em que eles foram criados
    delete theo;
    delete victor;
    delete jorge;
    delete fabio;
    delete jogo1;
    delete jogo2;
}