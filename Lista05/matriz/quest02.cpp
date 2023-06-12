#include<iostream>
using namespace std;

/*
Escreva um algoritmo que leia um número inteiro A e uma matriz M (30,30) de inteiros. Conte 
quantos valores da matriz M são iguais a A. Crie, a seguir, uma matriz X contendo todos os 
elementos de M diferentes de A (quando for igual a A, insira um 0). Mostre os resultados.v
*/

const int tam = 5;

int main(){
	
	int num, m[tam][tam], x[tam][tam], i, j;
	
	cout << "Digite um numero qualquer para comparar com a matriz: ";
	cin >> num;
	
	cout << "\nDigite os elementos da matriz\n";
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j]; 
			if(m[i][j] == num){
				x[i][j] = 0;
			}else{
				x[i][j] = m[i][j];
			}
		}
	}
	
	cout << "\nElementos da matriz: \n\n";
	for(i=0;i<tam;i++){
		cout << "\t|";
		for(j=0;j<tam;j++){
			cout << x[i][j] << " "; 
		}
		cout << "|\n";
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
