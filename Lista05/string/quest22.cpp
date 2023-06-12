#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia uma frase e escreva-a de duas formas: a frase completa e a frase 
contendo só as palavras em “posições ímpares” (1ª palavra, 3ª palavra, 5ª palavra, ...).
Entrada: eu gosto de roupa azul
Saída: eu de azul
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
