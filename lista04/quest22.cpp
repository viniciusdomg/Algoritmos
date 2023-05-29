#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um vetor X de até 10 elementos. A leitura deverá ser executada até 
que o vetor fique totalmente preenchido ou seja informado um valor negativo ou zero. Em seguida 
leia 2 valores de índices representando um intervalo fechado no vetor (índice inicial e índice 
final). Finalmente o algoritmo deverá escrever todos os elementos do vetor naquele intervalo, o 
maior elemento, o menor elemento e a média dos elementos.
*/

const int tam=10;
int main(){
	
	int n[tam], i1, i2, maior, menor, media=0, i=0, cont=0;
	
	cout << "\nDigite os elementos do vetor: ";
	do{
		cin >> n[i];
		i++;
	}while(i<tam);
	
	do{
		cout << "\nDigite os intervalos que deseja saber dos valores do vetor (do inicio para o final): ";
		cin >> i1 >> i2;
	}while(i1<1 || i1>tam && i2<1 || i2>tam);
	
	i1 -= 1;
	i2 -= 1;
	
	cout << "\nElementos de intervalo desejado: \n\t";
	maior = n[i1];
	menor = n[i1];
	for(i=i1; i<=i2; i++){
		cout << n[i] << " ";
		if(n[i]<menor){
			menor = n[i];
		}
		if(n[i]>maior){
			maior = n[i];
		}
		media += n[i];
		cont++;
	}
	cout << "\n\n\tMaior numero do intervalo: " << maior;
	cout << "\n\tMenor numero do intervalo: " << menor ;
	cout << "\n\tMedia do intervalo: " << media/cont << "\n\n";
	system("pause");
}
