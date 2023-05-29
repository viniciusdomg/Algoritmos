#include<iostream>
using namespace std;

/*
Crie um programa que exibe se um dia é dia útil, fim de semana ou dia inválido dado 
o número referente ao dia. Considere que domingo é o dia 1 e sábado é o dia 7.
*/

int main(){
	
	int dia;
	
	cout << "1-Domingo, 2-Segunda, 3-Terca ...\n";
	cout << "Digite o dia de semana: ";
	cin >> dia;
	
	if(dia>=2 && dia<=6){
		cout << "\n\nDia util da semana!\n\n";
	}else if(dia==1 || dia==7){
		cout << "\n\nFim de semana!\n\n";
	}else
		cout << "\n\nDia invalido, digite um dia valido...\n\n";
	
	system("pause");
}
