#include<iostream>
using namespace std;

/*
Um armazém trabalha com 10 mercadorias diferentes identificadas pelos números inteiros de 0 à 9.
Escreva um algoritmo que leia a quantidade vendida de cada mercadoria no final do mês 
(armazenando-os em um vetor Q) e o preço unitário de cada uma (armazenando-os em um vetor P). 
Em seguida calcule e escreva o faturamento mensal do armazém.
*/

int main(){

	int q[10], i;
	float p[10];
	long double faturamento=0;
	
	for(i=0; i<10; i++){	
		cout << "Digite a quantidade de venda da " << i+1 << "a mercadoria: ";
		cin >> q[i];
		cout << "\nDigite o preco unitario dessa mercadoria: ";
		cin >> p[i];
		cout << "\n";
		faturamento += p[i]*q[i];
	}
	
	cout << "\n\tFaturamentos com a mercadoria = " << faturamento << "R$\n\n";
	
	system("pause");
}
