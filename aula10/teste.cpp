#include "PersistenciaDeJogador.h"
#include "Jogador.h"
#include <iostream>
#include <exception>

using namespace std;

void teste1() {
    Jogador* knight = new Jogador("Knight", 20, 10);
    Jogador* hornet = new Jogador("Hornet", 30, 15);
    
    PersistenciaDeJogador persistencia("teste1.txt");
    persistencia.salvar(knight);
    persistencia.salvar(hornet);
    
    delete knight;
    delete hornet;
}

void teste2() {
    PersistenciaDeJogador persistencia("teste2.txt");
    try {
        int quantidade = 0;
        Jogador** jogadores = persistencia.carregar(quantidade);
        
        if (quantidade > 0) {
            for (int i = 0; i < quantidade; ++i) {
                jogadores[i]->mostrarAtributos();
            }
        }
        
        if (jogadores != nullptr) {
            for (int i = 0; i < quantidade; ++i) {
                delete jogadores[i];
            }
            delete[] jogadores;
        }
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
}