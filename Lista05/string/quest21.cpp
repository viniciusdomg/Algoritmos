#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que declare duas strings e leia a primeira string. Em seguida, copie o texto 
da primeira string para a segunda em letras mai�sculas se a primeira letra da primeira string for 
min�scula ou em letras min�sculas se a primeira letra da primeira string for mai�scula. Imprima no 
final o conte�do das duas strings.
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
