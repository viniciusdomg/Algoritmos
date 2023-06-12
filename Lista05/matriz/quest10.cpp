#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia uma matriz A[12][12] e retorna a média aritmética dos elementos abaixo da
diagonal principal.
*/

const int tam = 4;
int main(){
	
	int m[tam][tam], i, j;
	float media = 0;
	bool flag = true;
	
	cout << "Digite os elementos da matriz\n";
	for(i=0; i<tam; i++){
		for(j=0;j<tam;j++){
			cout << "\nElemento [" << i+1 << "] [" << j+1 << "]: ";
			cin >> m[i][j];
			if(i==j && !flag){
				media+= m[i][j-1];
			}
		}
		flag = false;
	}
	
	cout << "\nElementos da Matriz\n";
	for(i=0; i<tam; i++){
		cout << "\n";
		for(j=0; j<tam; j++){
			cout << m[i][j] << " ";
		}
	}
	cout << "\n\n\tMedia dos elementos abaixo da DP: " << media/(tam-1);
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
