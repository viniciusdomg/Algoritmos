#include<iostream>
using namespace std;

/*
Escreva um algoritmo que leia uma matriz M(5,5) e calcula as somas abaixo, escreva essas somas e 
a matriz.
a) da linha 4 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz M
*/

const int tam = 5;
int main(){
	
	int m[tam][tam], i, j, x[5], cont;
	
	cout << "Escreva os elementos de uma matriz\n";
	
	for(i=0;i<tam;i++){
		x[i] = 0;
		for(j=0;j<tam;j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j];	
		}
	}
	
	cout << "\nElementos da matriz: \n\n";
	for(i=0;i<tam;i++){
		cout << "\t|";
		for(j=0;j<tam;j++){
			cout << m[i][j] << " ";
			if(i==3){
				x[0] += m[i][j]; 
			}else if(j==1){
				x[1] += m[i][j];
			} 
			if(i==j){
				x[2] += m[i][j]; 
			} 
			if((tam-1)-i == j){
				x[3] += m[i][j];
			}
			x[4] += m[i][j]; 
		}
		cout << "|\n";
	}
	
	cout << "\n\na) " << x[0];
	cout << "\n\nb) " << x[1];
	cout << "\n\nc) " << x[2];
	cout << "\n\nd) " << x[3];
	cout << "\n\ne) " << x[4];

	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
