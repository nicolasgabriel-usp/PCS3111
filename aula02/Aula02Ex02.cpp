#include <math.h>
#include <iostream>
#include <string>

using namespace std;

void ganhaExperiencia (int& nivel, int* experienciaAtual, int nivelDoMonstro) {
    int XPBase, XPGanha;
    double multiplicador, XPNecessaria;
    if (nivelDoMonstro <= 5){
        XPBase = 60;
    } else if (nivelDoMonstro >= 6){
        XPBase = 150;
    }
    multiplicador = pow(1.2, (nivelDoMonstro - nivel));
    XPGanha = (int) (XPBase * multiplicador);
    *experienciaAtual += XPGanha;
    XPNecessaria = (int)(100 * pow(1.3, nivel));
    while (*experienciaAtual >= XPNecessaria){
        nivel += 1;
        *experienciaAtual -= XPNecessaria;
        XPNecessaria = (int)(100 * pow(1.3, nivel));
    }

}

/*Comente a main para enviar*/
int main() {
    int level, expAtual, levelMonstro;
    level = 3;
    expAtual = 37;
    levelMonstro = 6;
    cout << level << expAtual << levelMonstro << endl;
    ganhaExperiencia(level, &expAtual, levelMonstro);
    cout << level << expAtual << levelMonstro << endl;
    return 0;
}