#include<iostream>
using namespace std;

/*
Escreva um algoritmo que leia uma matriz M(12,13) e multiplique todos os 13 elementos de cada uma
das 12 linhas de M pelo maior elemento daquela linha. Escreva a matriz lida e a modificada.
*/

const int l = 3, c=3;
int main(){
	
	int m[l][c], maior[l], i, j;
	bool teste = true;
	
	cout << "\nDigite os elementos da matriz\n";
	for(i=0;i<l;i++){
		for(j=0; j<c; j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j];
			if(teste){
				maior[i] = m[i][j];
				teste = false;
			}else{
				if(maior[i]<m[i][j]){
					maior[i] = m[i][j];
				}
			}
		}
	}	
	
	for(i=0;i<l;i++){
		for(j=0; j<c; j++){
			m[i][j] *= maior[i];
		}
	}
	
	cout << "\n\nNovos elementos\n";
	for(i=0;i<l;i++){
		cout << "\n";
		for(j=0; j<c; j++){
			cout << m[i][j] << " ";
		}
	}
}
