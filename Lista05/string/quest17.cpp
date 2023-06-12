#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia uma frase e escreva uma tabela que mostre, para cada letra, o 
número de vezes que a mesma aparece na frase.
Entrada: “uma frase qualquer”
Saída: “u” aparece 3 vezes
“m” aparece 1 vez
“a” aparece 3 vezes
“f” aparece 1 vez
“r” aparece 2 vezes
“s” aparece 1 vez
“e” aparece 2 vezes
“q” aparece 2 vezes
“l” aparece 1 vez
*/

int main(){
	
	string frase;
	int i, j, cont;
	
	cout << "Digite a frase que desejar: ";
	getline(cin, frase);

	bool x[frase.length()];
	
	for(i=0; i<frase.length(); i++){
		x[i] = false;
	}
	cout << "\n";
	
	for(i=0; i<frase.length(); i++){
		cont = 0;
		for(j=0; j<frase.length(); j++){
			if(frase[i]==frase[j] && x[j]==false && frase[j] != ' '){
				cont ++;
				x[j] = true;
			}
		}
		if(cont>1){
			cout << "\n'" << frase[i] << "' aparece " << cont << " vezes";
		}else if(cont==1){
			cout << "\n'" << frase[i] << "' aparece " << cont << " vez";
		}
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
