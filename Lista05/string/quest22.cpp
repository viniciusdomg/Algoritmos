#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia uma frase e escreva-a de duas formas: a frase completa e a frase 
contendo s� as palavras em �posi��es �mpares� (1� palavra, 3� palavra, 5� palavra, ...).
Entrada: eu gosto de roupa azul
Sa�da: eu de azul
*/

int main(){

	string texto, fraseN, aux;
	int i, cont=0;
	
	cout << "Digite o texto que voce desejar: ";
	getline(cin, texto);
	
	for(i=0; i<texto.length(); i++){
		aux += texto[i];
		if(texto[i]==' ' || i==texto.length()-1){
			cont++;
			if(cont%2!=0){
				fraseN += aux;
			}
			aux.clear();
		}
	}
	
	cout << "\n\nNOVA FRASE:  " << fraseN;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
