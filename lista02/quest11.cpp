#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia um n�mero inteiro maior do que zero (m�ximo de 5 algarismos), verifique
e escreva a soma de todos os seus algarismos. Por exemplo, para o n�mero 251 a soma ser� 8 (2 + 5 +
1). Se o n�mero lido n�o for maior do que zero, o programa terminar com a mensagem �N�mero inv�lido�.
*/

int main(){
	
	int num, soma = 0, digito;
	
	cout << "Digite um valor inteiro qualquer, maior que 0 e menor que 100.000 : ";
	cin >>  num;
	
	if((num>0)&&(num<100000)){
		digito = num/10000;
		soma += digito;
		digito = (num%10000)/1000;
		soma += digito;
		digito = (num%1000)/100;
		soma += digito;
		digito = (num%100)/10;
		soma += digito;
		digito = (num%10);
		soma += digito;
		cout << "\nO somatorio dos digitos = " << soma << endl;
	}else{
		"\nEscolha um numero que tenha no maximo 5 algarismos!\n";
	}
}
