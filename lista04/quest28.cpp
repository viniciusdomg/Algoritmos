#include<iostream>
using namespace std;

/*
Elabore um algoritmo que solicite ao usuário que digite dez números inteiros aleatórios. 
Para cada número digitado, insira-o em um vetor V ordenado em ordem decrescente. Ao final
escreva o vetor V.
*/

int main(){

	int n[10], num, aux, i, j, cont=0;
	
	do{
		cout << "Digite elementos aleatorios para um vetor: ";
		cin >> num;
		
		n[cont] = num;
		if(cont>0){
			for(i=0; i<=cont; i++){
				for(j=0; j<i; j++){
					if(n[i]<n[j]){
						aux = n[i];
						n[i] = n[j];
						n[j] = aux;
					}
				}
			}
		}
		cont++;
		cout << "\n";
	}while(cont<10);
	
	cout << "\n\tElementos: ";
	for(i=0; i<10; i++){
		cout << n[i] << " ";
	}	
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
