#include<iostream>
using namespace std;

/*
Elaborar um algoritmo que leia um vetor de 10 posições de inteiros e chame uma
função MinMax. Esta função deve receber o vetor lido e, por referência, duas variáveis
inteiras, min e max. O objetivo da função é buscar os valores do menor e maior
elementos do vetor e atribuir às variáveis min e max respectivamente.
*/

void MinMax(int *v, int *pMin, int *pMax);

int main(){
	
	int v[10], min, max, i;
	
	cout << "\nDigite os elementos do vetor\n\n";
	for(i=0; i<10; i++){
		cout << "Elemento " << i+1 << ": ";
		cin >> v[i];
	}
	
	MinMax(v, &min, &max);
	
	cout << "\nElementos do vetor:";
	for(i=0; i<10; i++){
		cout << " " << v[i];
	}
	cout << "\n\nMenor elemento do vetor: " << min;
	cout << "\nMaior elemento do vetor: " << max;
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}

void MinMax(int *v, int *pMin, int *pMax){
	int i, min, max;
	min = max = v[0];
	for(i=0; i<10; i++){
		if(v[i]<min){
			min = v[i];
		}
		if(v[i]>max){
			max = v[i];
		}
	}
	*pMin = min;
	*pMax = max;
}
