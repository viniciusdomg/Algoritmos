#include<iostream>
using namespace std;

/*
Faça um algoritmo que gere e escreva automaticamente a seguinte matriz:
1 1 1 1 1 1
1 2 2 2 2 1
1 2 3 3 2 1
1 2 3 3 2 1
1 2 2 2 2 1
1 1 1 1 1 1
*/

int main(){
	
	int tam, i, j, c=0;
	
	do{	
		cout << "\nDigite o tamanho da matriz: ";
		cin >> tam;
	}while(tam < 1);
	
	int m[tam][tam];
	
	do{
		for(i=c; i<(tam-c); i++){
			for(j=c; j<(tam-c); j++){
				m[i][j] = c+1;
			}
		}
		c++;
	}while(c < tam);
		
	
	cout << "\nMatriz\n";
	for(i=0; i<tam; i++){
		cout << "\n";
		for(j=0; j<tam; j++){
			cout << m[i][j] << " ";
		}
	}
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
