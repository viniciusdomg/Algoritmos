#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor de 10 posições de inteiros, ordene-o (ordem crescente) e o
escreva.
*/

int main(){
	
	int n[10], i, j, aux;
	
	cout << "Escreva elementos qualquer para um vetor: ";
	for(i=0; i<10; i++){
		cin >> n[i];
	}
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(n[i]<n[j]){
				aux = n[i];
				n[i] = n[j];
				n[j] = aux;
			}
		}
	}
	
	cout << "\n\tElementos: ";
	for(i=0; i<10; i++){
		cout << n[i] << " ";
	}
	
}
