#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia os 9 primeiros elementos de um vetor de 10 elementos, um índice P 
(entre 0 e 8, não aceitar valores fora dessa faixa) e um número inteiro X. Em seguida inclua o 
valor de X na posição P do vetor B fazendo com que os elementos existentes dentro do vetor 
(da posição P+1 em diante) sejam deslocados de uma posição para o final (Considere que existe 
espaço no vetor para o deslocamento). Logo após o processamento escrever o vetor B).

Vetor B  11	 21	 34	 56	 78	 23	 54	 78	 99
(inicial) 0	 1	 2	 3	 4	 5	 6	 7	 8	 9

P = 6; X = 80;

Vetor B 11	21	34	56	78	23	80	54	78	99
(final) 0	1	2	3	4	5	6	7	8	9
*/

const int tam=10;
int main(){
	
	int n[tam], i, p, x, aux, aux2;

	cout << "\nDigite os nove elementos do vetor: ";
	for(i=0; i<tam-1; i++){
		cin >> n[i];
	}
	
	cout << "\nDigite a posicao que deseja incluir o numero: ";
	cin >> p;
	cout << "\nDigite o numero que sera incluido: ";
	cin >> x;
	
	aux = n[p];
	n[p] = x;
	
	for(i=p+1; i<tam; i++){
		aux2 = n[i];
		n[i] = aux;
		aux = aux2;		
	}
	
	cout << "\nVetor transformado: ";
	for(i=0;i<tam;i++){
		cout << n[i] << " ";
	}
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
	
}
