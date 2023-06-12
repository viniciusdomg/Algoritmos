#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia uma cadeia de caracteres (máximo 40 caracteres) inverta-a armazenando em
outra variável e em seguida mostre a variável com a cadeia invertida. Por exemplo, ao receber a string
"eaj-ufrn", o algoritmo deverá mostrar como saída a string "nrfu-jae".
*/

int main(){

	string frase, invert;
	int i;
	bool maior=false;
	
	do{
		if(maior){
			cout << "\nPor favor digite uma frase com menos de 40 caracteres!\n\n";
			maior = false;
		}
		cout << "Digite uma frase: ";
		getline(cin, frase);
		if(frase.length()>40){
			maior = true;
		}
	}while(frase.length()>40);
	
	for(i=frase.length()-1; i>=0; i--){
		invert += frase[i];
	}
	
	cout << "\n\n\tFrase Original:   " << frase;
	cout << "\n\tFrase Modificada: " << invert;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
