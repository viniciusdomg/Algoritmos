#include<iostream>
using namespace std;

/*
Na teoria dos sistemas, define-se como elemento minimax de uma matriz o menor elemento da linha onde
se encontra o maior elemento da matriz. Escreva um algoritmo que leia uma matriz 10 X 10 de númros e
encontre seu elemento minimax, mostrando também sua posição.
*/

const int tam=3;
int main(){
	
	int m[tam][tam], i, j, l, c, minimax;
	bool flag = true;
	
	cout << "Digite os elementos da matriz\n";
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j];
			if(flag){
				minimax = m[i][j];
				l = i;
				flag = false;
			}else{
				if(minimax<m[i][j]){
					minimax = m[i][j];
					l = i;
				}
			}
		}
	}
	flag=true;
	for(j=0; j<tam; j++){
		if(flag){
			minimax = m[l][j];
			flag = false;
		}else{	
			if(minimax>m[l][j]){
				minimax = m[l][j];
				c = j;
			}
		}
	}
	
	cout << "\nMatriz\n";
	for(i=0; i<tam; i++){
		cout << "\n";
		for(j=0; j<tam; j++){
			cout << m[i][j] << " ";
		}
	}
	
	cout << "\n\nElemento minimax da matriz: " << minimax;
	cout << "\nPosicao do elemento na matriz: [" << l << "][" << c << "]"; 

	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
