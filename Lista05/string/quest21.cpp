#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que declare duas strings e leia a primeira string. Em seguida, copie o texto 
da primeira string para a segunda em letras maiúsculas se a primeira letra da primeira string for 
minúscula ou em letras minúsculas se a primeira letra da primeira string for maiúscula. Imprima no 
final o conteúdo das duas strings.
*/

int main(){
	
	string texto, frase2;
	int i = 0;	
	
	cout << "Digite o texto que desejar: ";
	getline(cin, texto);
	
	if(texto[i] < 97){
		for(i=0;i<texto.length(); i++){
			if(texto[i]==' '){
				frase2 += ' ';
			}else{
				frase2 += texto[i]+32;
			}
		}
	}else{
		for(i=0; i<texto.length(); i++){
				frase2 += texto[i]-32;
		}
	}
	
	cout << "\nNova frase formada: " << frase2;
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
