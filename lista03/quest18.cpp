#include<iostream>
#include<math.h>
using namespace std;

/*
Elabore um algoritmo que leia N dígitos numéricos, e gere um único número decimal. 
Ex: (2,3,2,0) = 2320.
*/

int main(){	

	int num, digito=0, expoente, n, cont=0;
	
	cout << "Quantos digitos numericos ira digitar? ";
	cin >> n;
	
	while(cont<n){
		cout << "\nDigite o numero de sua escolha: ";
		cin >> num;
		expoente=(pow(10, n-1))/(pow(10, cont));
		digito += expoente*num;
		cont ++;
	}
	
	cout << "\n\nDigito dos numeros: " << digito;
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}
