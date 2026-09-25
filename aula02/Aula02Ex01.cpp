#include <iostream>
#include <math.h>
#include <string>


using namespace std;

int* procurarItem(string nomes[], int nivel[], int quantidade, string item) {
    for (int i = 0; i < quantidade; i++){
        if (nomes[i] == item){
            return &nivel[i];
        }
    }
    return nullptr;
}


int main() {
    return 0;
}