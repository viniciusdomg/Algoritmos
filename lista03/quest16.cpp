#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um número qualquer e escreva todos os seus divisores.
*/

int main(){
	
	int num, div=1;
	
	cout << "Digite o numero o qual quer saber os divisores: ";
	cin >> num;
	
	cout << "\n\nOs divisores de " << num << " sao: ";
	do{
		if(num%div==0){
			cout << div << " ";
		}
		div++;
	}while(div<=num);
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
}
