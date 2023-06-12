#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia uma string e a escreva sem as suas vogais.
*/

int main(){
	
	string texto;
	int i;
	
	cout << "Digite a frase que deseja: ";
	getline(cin, texto);
	
	for(i=0; i<texto.length(); i++){
		if(texto[i]=='a' || texto[i]=='A'){
			texto[i] = ' ';
		}else if(texto[i]=='e' || texto[i]=='E'){
			texto[i] = ' ';
		}else if(texto[i]=='i' || texto[i]=='I'){
			texto[i] = ' ';
		}else if(texto[i]=='o' || texto[i]=='O'){
			texto[i] = ' ';
		}else if(texto[i]=='u' || texto[i]=='U'){
			texto[i] = ' ';
		}
	}
	
	cout << "\n\tNovo texto:   " << texto;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
