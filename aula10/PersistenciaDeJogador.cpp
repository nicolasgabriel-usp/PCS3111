#include "PersistenciaDeJogador.h"
#include <fstream>
#include <stdexcept>
#include <vector>

PersistenciaDeJogador::PersistenciaDeJogador(string arquivo) : arquivo(arquivo) {}

PersistenciaDeJogador::~PersistenciaDeJogador() {}

void PersistenciaDeJogador::salvar(Jogador* j) {
    ofstream saida;
    saida.open(arquivo, ios::app); 
    
    if (saida.fail()) {
        return; 
    }
    
    saida << j->getNome() << endl;
    saida << j->getHpMax() << endl;
    saida << j->getForca() << endl;
    
    saida.close();
}

Jogador** PersistenciaDeJogador::carregar(int &quantidade) {
    ifstream entrada;
    entrada.open(arquivo); 
        if (entrada.fail()) {
        throw invalid_argument("Arquivo nao encontrado");
    }
    
    string nome;
    int hpMax, forca;
    vector<Jogador*> tempJogadores;
    
    entrada >> nome >> hpMax >> forca;
    
    while (entrada) {
        tempJogadores.push_back(new Jogador(nome, hpMax, forca));
        entrada >> nome >> hpMax >> forca;
    }
    
    if (!entrada.eof()) {
        for (auto j : tempJogadores) {
            delete j;
        }
        entrada.close();
        throw logic_error("Erro de leitura");
    }
    
    entrada.close();
    
    if (tempJogadores.empty()) {
        quantidade = 0;
        return nullptr;
    }
    
    quantidade = tempJogadores.size();
    Jogador** vetor = new Jogador*[quantidade];
    for (int i = 0; i < quantidade; ++i) {
        vetor[i] = tempJogadores[i];
    }
    
    return vetor;
}