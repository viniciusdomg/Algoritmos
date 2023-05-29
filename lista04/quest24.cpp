#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor B de 10 elementos (considere que podem existir elementos 
repetidos). Em seguida mova para um vetor C apenas os elementos de B que não se repetem, deixando 
em B o elemento -1 em cada posição substituindo o elemento que foi movido. Ao final escreva o 
vetor C.
*/

const int tam=10;
int main(){
	
	int b[10], c[10], i, j, cont, x=0;
	
	cout << "Digite os elementos de B: ";
	for(i=0;i<tam;i++){
		cin >> b[i];
	}
	
	for(i=0; i<tam; i++){
		cont=0;
		for(j=0; j<tam; j++){
			if(b[j]==b[i]){
				cont++;
			}
		}
		if(cont==1){
			c[x]=b[i];
			x++;
			b[i] = -1;
		}
	}
	
	cout << "\nElementos do vetor C: ";
	for(i=0; i<x; i++){
		cout << c[i] << " ";
	}
	cout << "\n\nElementos do vetor B: ";
	for(i=0;i<tam; i++){
		cout << b[i] << " ";
	}
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}
