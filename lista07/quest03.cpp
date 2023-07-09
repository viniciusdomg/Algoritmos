#include<iostream>
using namespace std;

/*
Escreva uma função que recebe 2 números inteiros n1 e n2 como entrada e retorna a soma de todos os 
números inteiros contidos no intervalo [n1,n2]. Use esta função em um programa que lê n1 e n2 do 
usuário e imprime a soma.
*/

int soma(int sIntervalo, int num);

int main(){
	
	int n1, n2, i, total=0;
	
	cout << "Digite o primeiro numero do intervalo: ";
	cin >> n1;
	cout << "\nDigite o ultimo numero do intervalo: ";
	cin >> n2;
	
	for(i=n1; i<=n2; i++){
		total += soma(total, i);
	}
	system("cls");
	cout << "\n\tSoma dos numeros entre " << n1 << " e " << n2 << " = " << total << "\n\n";
	system("pause");
}

int soma(int sIntervalo, int num){
	sIntervalo = 0;
	sIntervalo += num;
	return sIntervalo;
}
