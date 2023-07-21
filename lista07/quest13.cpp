#include<iostream>
using namespace std;

/*
Escreva uma fun��o mm que receba um vetor inteiro v[0..n-1] e os endere�os de duas 
vari�veis inteiras, min e max, e deposite nessas vari�veis o valor do menor elemento
(m�nimo) e do maior elemento (m�ximo) do vetor. Elabore um algoritmo que teste a fun��o mm.
*/

const int tam=5;
void mm(int *vetor, int *min, int *max);
int main(){
	
	int v[tam], min, max, i;
	cout << "Digite os elementos do vetor\n\n";
	for(i=0;i<tam;i++){
		cout << "Elemento " << 1+i << ": ";
		cin >> v[i];
	}
	mm(v, &min, &max);
	cout << "\n\nMaior elemento do vetor = " << max;
	cout << "\nMenor elemento do vetor = " << min;
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}

void mm(int *vetor, int *min, int *max){
	int i;
	*min = *max = vetor[0];
	for(i=0;i<tam;i++){
		if(vetor[i]>*max){
			*max = vetor[i];
		}
		if(vetor[i]<*min){
			*min = vetor[i];
		}
	}
}
