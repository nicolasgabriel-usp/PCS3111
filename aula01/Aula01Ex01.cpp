#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int ganhaExperiencia(int nivel, int experienciaAtual, int nivelDoMonstro){
    int expGanha = 0;
    if (nivel == 20){
        return 20;
    }
    if (nivelDoMonstro >= 1 && nivelDoMonstro <= 5){
        expGanha = 100;
    } else if (nivelDoMonstro >= 6 && nivelDoMonstro <= 10){
        expGanha = 750;
    } else if (nivelDoMonstro >= 11 && nivelDoMonstro <= 15){
        expGanha = 5000;
    } else if (nivelDoMonstro >= 16 && nivelDoMonstro <= 20){
        expGanha = 15000;
    }

    double experienciaParaProximoNivel = 150 * pow(1.5,(nivel-1));
    if((experienciaAtual + expGanha) >= experienciaParaProximoNivel){
        return nivel+1;
    }
    return nivel;
}

int getQuantidadeDeItens(int tipo, int inventario[], int quantidade){
    int igual = 0;
    for (int i = 0; i < quantidade; i++){
        if (inventario[i] == tipo){
            igual += 1;
        }
    }
    return igual;
}

int getQuantidadeDeEquipamentosIguais(string equipamentos1[], int quantidade1, string equipamentos2[], int quantidade2){
    int iguais = 0;
    for(int i = 0; i < quantidade1; i++){
        for(int j = 0; j < quantidade2; j++){
            if(equipamentos1[i] == equipamentos2[j]){
                iguais += 1;
                break;
            }
        }
    }
    return iguais;
}

/*Comente a main para enviar*/
int main(){
    cout << ganhaExperiencia(6,200,6);

    return 0;
}