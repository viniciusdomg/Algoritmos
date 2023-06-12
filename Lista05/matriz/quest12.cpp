#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia uma matriz MxN, verifique e escreva o maior elemento da linha que 
contém o menor elemento da matriz.
*/

int main(){
	
	int l, c;
	cout << "Digite a quantidade de linhas da Matriz: ";
	cin >> l;
	cout << "\nDigite a quantidade de colunas da Matriz: ";
	cin >> c;
	
	int m[l][c], i, j, marc, menor, maior;
	bool flag = true;
	
	cout << "\nDigite os elementos da Matriz\n";
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j];
			if(flag){
				flag = false;
				menor = m[i][j];
				marc = i;
			}else{
				if(menor>m[i][j]){
					menor = m[i][j];
					marc = i;
				}
			}
		}
	}
	
	flag = true;
	for(j=0; j<c; j++){
		if(flag){
			flag = false;
			maior = m[marc][j];
		}else{
			if(maior<m[marc][j]){
				maior = m[marc][j];
			}
		}
	}
	
	cout << "\n\nElementos da Matriz\n";
	for(i=0;i<l;i++){
		cout << "\n";
		for(j=0;j<c;j++){
			cout << m[i][j] << " ";
		}
	}
	
	cout << "\n\nMaior elemento da linha do menor elemento: " << maior;
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
