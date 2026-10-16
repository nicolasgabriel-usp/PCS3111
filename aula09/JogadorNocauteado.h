#ifndef JOGADORNOCAUTEADO_H
#define JOGADORNOCAUTEADO_H
#include <string>
#include <stdexcept>
#include "Jogador.h"

using namespace std;

class JogadorNocauteado : public logic_error{
private:
    Jogador* nocauteado;
public:
    JogadorNocauteado(string mensagem, Jogador* nocauteado);
    virtual ~JogadorNocauteado();
    Jogador* getNocauteado();
};

#endif