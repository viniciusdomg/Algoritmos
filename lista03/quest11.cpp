#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia dois números inteiros, A e B, calcule e escreva o resto da divisão de A 
por B sem usar o operador de resto (%).
*/

int main(){
	
	int a, b, resto;
	
	cout << "Digite o valor de A: ";
	cin >> a;
	do{
		cout << "Digite o valor de B: ";
		cin >> b;
	}while(b==0);
	//Obriga os numeros a serem positivos
	if(b<0)
		b*=-1;
	if(a<0)
		a*=-1;
	
	resto = (a-((a/b)*b));
	cout << "\n\nEsse e o resto da divisao de A por B = " << resto << "\n\n\n";
	
	system("pause");
	
}
