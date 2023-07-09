#include<iostream>
using namespace std;

/*
Crie um algoritmo para manipular vetores. O seu programa deve implementar
uma função chamada inverteVetor, que recebe como parâmetro dois vetores V1 e V2,
ambos de tamanho N. A função deve copiar os elementos de V1 para V2 na ordem
inversa. Ou seja, se a função receber V1 = {1,2,3,4,5}, a função deve copiar os elementos
para V2 na seguinte ordem: V2 = {5,4,3,2,1}. Além disso, a função também deve retornar
o maior valor encontrado em V1. A função deve possuir a seguinte assinatura: int
inverteVetor(int *v1, int *v2, int n); Elabore um teste da função no main.
*/

int invertedor(int *v1, int *v2, int n);
int main(){
	int n;
	cout << "Qual o tamanho de vetor: ";
	cin >> n;
	system("cls");
	int v1[n], v2[n], i, maior;
	cout << "Digite os elementos do vetor\n\n";
	for(i=0; i<n; i++){
		cout << "Elemento " << i+1 << ": ";
		cin >> v1[i]; 
	}
	
	maior = invertedor(v1, v2, n);
	
	cout << "\n\nVetor 1 :";
	for(i=0; i<n; i++){
		cout << " " << v1[i];
	}
	cout << "\nVetor 2 :";
	for(i=0; i<n; i++){
		cout << " " << v2[i] ;
	}
	cout << "\n\nMaior elemento do vetor : " << maior;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

int invertedor(int *v1, int *v2, int n){
	int i, j = n-1, maior = 0;
	for(i=0; i<n; i++){
		v2[i] = v1[j];
		if(v1[j]>maior){
			maior = v1[j]; 
		}
		j--;
	}
	return maior;
}
