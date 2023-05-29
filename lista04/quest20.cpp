#include<iostream>
#include<math.h>
using namespace std;

/*
Elabore um algoritmo que leia dois vetores de inteiros X e Y, cada um com 5 elementos (não permita
elementos repetidos dentro de um mesmo vetor). Em seguida calcule e escreva os seguintes vetores
resultantes:
a. Soma: soma dos elementos de X e Y de mesmo índice;
b. Distância: distância entre os elementos de X e Y de mesmo índice;
*/

int main(){
	
	int X[5], Y[5], i, cont=0;
	bool teste=true;
	
	cout << "Digite os 5 elementos dos conjuntos X e Y: \n";
	for(i=0; i<5; i++){
		cout << "\n" << i+1 << "o de X: ";
		cin >> X[i];
		while(cont<i){
			if(X[cont]==X[i]){
				teste=false;
			}
			cont++;
			if(teste==false){
				cout << "\nDigite um numero diferente do que voce ja digitou: ";
				cin >> X[i];
				cont = 0;
			}
			teste = true;
		}	
	}
	cont=0;
	for(i=0; i<5; i++){
		cout << "\n" << i+1 << "o de Y: ";
		cin >> Y[i];
		while(cont<i){
			if(Y[cont]==Y[i]){
				teste=false;
			}
			cont++;
			if(teste==false){
				cout << "\nDigite um numero diferente do que voce ja digitou: ";
				cin >> Y[i];
				cont = 0;
			}
			teste = true;
		}	
	}
	cout << "\n\nSoma dos conjuntos para os elementos na mesma posicao";
	for(i=0; i<5; i++){
		cout << "\n\t" << i << "a Posicao= " << X[i]+Y[i];
	}
	cout << "\n\nDistancia dos conjuntos para os elementos na mesma posicao";
	for(i=0; i<5; i++){
		cout << "\n\t" << i << "a Posicao= " << fabs(X[i]-Y[i]);
	}
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
	
}
