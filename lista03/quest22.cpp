#include<iostream>
#include<math.h>
using namespace std;

/*
Elabore um algoritmo que leia v�rios pares de dois n�meros inteiros, calcule e escreva, para 
cada par, o resultado do primeiro elevado ao segundo (sem utilizar a fun��o de pot�ncia) e a 
soma dos dois n�meros em m�dulo. Considere que o m�dulo de um n�mero representa a dist�ncia 
desse n�mero � origem (ponto zero da reta real). Exemplo: M�dulo de 9 = 9; m�dulo de -9 = 9.
*/

int main(){
	
	int num, digito1, digito2, cont, somaMulti=1;
	
	cout << "Digite um numero inteiro que contenha dois algarismo: ";
	cin >> num;
	
	digito1 = num/10;
	digito2 = num%10;
	
	for(cont=0; cont<digito2; cont++){
		somaMulti*=digito1;
	}
	cout << "\nPrimeiro algarismo elevado ao segundo= " << somaMulti;
	
	somaMulti = fabs(digito1+digito2);
	cout << "\nPrimeiro algarismo mais o segundo em modulo= " << somaMulti;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
