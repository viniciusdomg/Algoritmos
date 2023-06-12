#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia uma string qualquer e escreva-a espelhada.
Entrada: “uma frase qualquer”
Saída: “reuqlauq esarf amu”
*/

int main(){
	
	string frase;
	int i;
	
	cout << "Digite uma frase qualquer: ";
	getline(cin, frase);
	
	cout<< "\n\nFrase espelhada: ";
	for(i=frase.length()-1; i>=0; i--){
		cout << frase[i];
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
