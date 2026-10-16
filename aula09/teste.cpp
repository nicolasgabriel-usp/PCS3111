#include <iostream>
#include <stdexcept>
#include "Jogador.h"
#include "JogadorNocauteado.h"

using namespace std;

void teste1() {
  try {
    Jogador* mario = new Jogador("Mario", 0, 50);
  }
  catch (invalid_argument* mario){
    cout << mario->what() << endl;
    delete mario;
  }
  try {
    Jogador* luigi = new Jogador("Luigi", 100, -1);
  }
  catch (invalid_argument* luigi){
    cout << luigi->what() << endl;
    delete luigi;
  }
}

void teste2() {
  Jogador* mario = new Jogador("Mario", 100, 50);
  mario->defender(100); // Fora do try, pois apenas deixa o HP zerado/nocauteado sem lançar exceção de imediato

  try {
    mario->defender(10); // Agora deve lançar a exceção pois já está nocauteado
  }
  catch (JogadorNocauteado* e) {
    cout << e->what() << endl;
    delete e;
  }

  delete mario;
}