#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia duas strings e informe se s�o iguais ou diferentes. Obs: N�o utilize 
a fun��o de compara��o de strings.
*/

int main(){
	
	string texto1, texto2;
	int fim;
	
	cout << "Digite o primeiro texto: ";
	getline(cin, texto1);
	
	cout << "\nDigite o segundo que deseja comparar: ";
	getline(cin, texto2);
	
	if(texto1.compare(0,texto1.length(), texto2)){
		cout << "\n\n\tAs frase nao sao iguais :(";
	}else{
		cout << "\n\n\tAS FRASES SAO IGUAIS!!";	
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
