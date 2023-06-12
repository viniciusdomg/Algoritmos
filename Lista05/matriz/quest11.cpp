#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia uma matriz MxN, verifique e escreva as coordenadas (linha e coluna) 
do maior e do menor elementos.
*/

int main(){
	
	int l, c;
	
	cout << "Digite a quantidade de linhas da Matriz: ";
	cin >> l;
	cout << "\nDigite a quantidade de colunas da Matriz: ";
	cin >> c;
	
	int m[l][c], i, j, maior, menor;
	bool flag = true;
	
	cout << "\nDigite os elementos da matriz\n";
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j];
			if(flag){
				flag=false;
				maior = m[i][j];
				menor = m[i][j];
			}else{
				if(maior<m[i][j]){
					maior = m[i][j];
				}
				if(menor>m[i][j]){
					menor = m[i][j];
				}
			}
		}
	}
	
	cout << "\n\nElementos da Matriz\n";
	for(i=0; i<l; i++){
		cout << "\n";
		for(j=0; j<c; j++){
			cout << m[i][j] << " ";
		}
	}
	
	cout << "\n\nMaior elemento da Matriz: " << maior;
	cout << "\nMenor elemento da Matriz: " << menor;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
