#include<iostream>
using namespace std;

/*
O n�mero 3025 possui a seguinte caracter�stica: 30+25 = 55 e 552 = 3025. Elaborar um algoritmo que leia
N n�meros de 4 algarismos e escreva a mensagem �positivo� se o n�mero tiver essa caracter�stica e
�negativo� se n�o tiver.
*/

int main(){
	
	int num, abs, cont;
	char resp;	

	do{
		do{
			cout << "\nDigite um numero que contenha 4 algarismos (ex:1024): "; 
			cin >> num;
		}while(num<1000 || num>9999);
		abs = ((num/100)+(num%100));
		if(abs*abs==num){
			cout << "\n\nPositivo!";
		}else{
			cout << "\n\nNegativo!";
		}
		cout << "\n\nDeseja testar mais algum numero? (s-sim n-nao) ";
		cin >> resp;	
	}while(resp=='s');
	
	cout << "\n\n\nFIM DO PROGRAMA\n\n";
	system("pause");
	
}
