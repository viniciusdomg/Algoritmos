#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor de 20 posi��es de inteiros e verifique se ele � um pal�ndromo, 
ou seja, se a sua leitura em qualquer dire��o � a mesma. Exemplo: O vetor 1 2 3 4 5 6 6 5 4 3 2 1 � 
um pal�ndromo, pois se for lido de frente para tr�s ou de tr�s para frente ter� exatamente os mesmos
elementos.
*/

const int tamanho = 20;
int main(){
	
	int v[tamanho], i, j=(tamanho-1), cont=0;
	
	
	cout << "Digite os 20 elementos do vetor: ";
	for(i=0; i<tamanho; i++){
		cin >> v[i];
	}
	
	for(i=0; i<(tamanho/2); i++){
		if(v[i]==v[j]){
			cont++;
			j--;
		}
	}
	if(cont==tamanho/2){
		cout << "\n\tEsse numero e um palindromo!\n\n";
	}else{
		cout << "\n\tEsse numero nao e um Palindromo\n\n";
	}
		
	system("pause");
		
}
