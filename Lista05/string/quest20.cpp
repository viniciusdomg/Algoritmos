#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que receba um nome completo em uma string e apresente apenas o �ltimo nome e o 
1� nome na seguinte forma: �ltimo nome, 1� nome.
Entrada: Ana Fernandes Oliveira
Sa�da: Oliveira, Ana
*/

int main(){
	
	string frase;
	int i, inicio;
	
	cout << "Digite seu nome completo: ";
	getline(cin, frase);
	
	cout << "\n";
	i = frase.length();
	do{
		i--;
		inicio = i; 
	}while(frase[i]!=' ');
	
	while(inicio<frase.length()-1){
		inicio++;
		cout << frase[inicio];
	}
	
	cout << ", ";
	i=0;
	do{
		cout << frase[i];	
		i++;
	}while(frase[i] != ' ');

	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
