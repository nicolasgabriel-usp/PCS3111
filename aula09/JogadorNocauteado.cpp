#include "JogadorNocauteado.h"

JogadorNocauteado::JogadorNocauteado(string mensagem, Jogador* nocauteado) 
    : logic_error(mensagem), nocauteado(nocauteado) {}

JogadorNocauteado::~JogadorNocauteado() {}

Jogador* JogadorNocauteado::getNocauteado() {
    return nocauteado;
}