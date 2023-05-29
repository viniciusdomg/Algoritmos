#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor de 15 posições de inteiros e o compacte, ou seja, elimine 
as posições com valores iguais a zero. Para isso todos os elementos à frente do valor zero devem
ser movidos uma posição para trás no vetor.
*/

int tam=15;
int main(){
	
	int n[tam], i, j, cont=0;
	
	cout << "Digite os elementos do vetor: ";
	for(i=0; i<tam; i++){
		cin >> n[i];
	}
	
	for(i=0; i<tam; i++){
		if(n[i]==0){
			for(j=0; j<tam-1; j++){
				n[j] = n[j+1];
				if(j==tam-2){
					n[j+1] = 0;
				}
			}
		}else{
			cont++;
		}
	}
	
	cout << "\n\tElementos: " ;
	for(i=0; i<cont; i++){
		cout << n[i] << " ";
	}
}
