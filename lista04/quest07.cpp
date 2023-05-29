#include <iostream>
using namespace std;

/*
Elabore um algoritmo que leia dois vetores V1 e V2 de 10 posições cada e faça a 
multiplicação dos elementos de mesmo índice, colocando o resultado em um terceiro 
vetor V3. Mostre o vetor resultante.
*/

int main(){

    int v1[10], v2[10], v3[10], i;

    cout << "Digite os elementos dos vetores de multiplicacao\n";
    for(i=0; i<10; i++) {
        cout << "\nDigite o elemento da " << i+1 << "a posicao do vetor1: ";
        cin >> v1[i];
        cout << "\nDigite o elemento da " << i+1 << "a posicao do vetor2: ";
        cin >> v2[i];
        v3[i] = v1[i]*v2[i];
    }
    cout << "\n\nEsses sao os produtos dos vetores:";
    for(i=0; i<10; i++){
        cout << " " << v3[i];
    } 
     
    cout << "\n\n\nFIM DO PROGRAMA\n";
    system("pause");
}
