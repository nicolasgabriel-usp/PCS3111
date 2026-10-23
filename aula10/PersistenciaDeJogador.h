#ifndef PERSISTENCIADEJOGADOR_H
#define PERSISTENCIADEJOGADOR_H

#include <iostream>
#include <string>
#include "Jogador.h"

using namespace std;

class PersistenciaDeJogador {
private:
    string arquivo;

public:
    PersistenciaDeJogador(string arquivo);
    virtual ~PersistenciaDeJogador();
    void salvar(Jogador* j);
    Jogador** carregar(int &quantidade);
};

#endif