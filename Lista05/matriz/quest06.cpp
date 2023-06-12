#include<iostream>
using namespace std;

/*
Escreva um algoritmo que leia uma matriz M(10,10) e a escreva. Troque, a seguir:
- Os elementos da diagonal principal pelos elementos da diagonal secundária;
- Os elementos da linha 5 com os da coluna 10.
Escreva a matriz modificada.
*/

const int tam=3;
int main(){
	
	int m[tam][tam], aux, i, j, l=0, c;
	
	cout << "Digite os elementos da matriz\n";
	
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j];
		}
	}
	
	cout << "\n\nMatriz Original\n";
	for(i=0; i<tam; i++){
		cout << "\n";
		for(j=0; j<tam; j++){
			cout << m[i][j] << " ";
		}
	}
	
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){
			if(i==j){
				c = (tam-1)-i;
				aux = m[i][j];
				m[i][j] = m[i][c];
				m[i][c] = aux;
			}
			
			if(j==tam-1){
				c = (tam-1)/2;
				aux = m[i][j];
				m[i][j] = m[c][l];
				m[c][l] = aux;
				l++;
			}
		}
	}
	
	cout << "\n\nMatriz Modificada\n";
	for(i=0; i<tam; i++){
		cout << "\n";
		for(j=0; j<tam; j++){
			cout << m[i][j] << " ";
		}
	}	
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
