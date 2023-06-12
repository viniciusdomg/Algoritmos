#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que leia uma string, verifique e informe se trata-se ou não de um palíndromo. 
Lembrando que um palíndromo é uma palavra que tenha a propriedade de poder ser lida tanto da direita
para a esquerda quanto da esquerda para a direita. Exemplos: ovo, arara, anotaram a data da maratona.
*/

int main(){
	
	string texto;
	int i, j, cont=0, limit;
	
	cout << "Digite um palavra ou texto: ";
	getline(cin, texto);
	
	j = texto.length()-1;
	limit = texto.length();
	
	for(i=0; i<texto.length()/2; i++){
		if(texto[i]==' ' && texto[j]!=' '){
			i++;
			limit--;
		}else if(texto[j]==' ' && texto[i]!=' '){
			j--;
			limit--;
		}
		
		cout << "\n" << texto[i] << "   " << texto[j] << "\n";
		if(texto[i]==texto[j] && i!=j){
			cont++;
		}
		j--;
	}
	cout << "\n\n" << cont << endl;
	if(cont==limit/2){
		cout << "\n\tEssa Frase e um Palindromo!!";
	}else{
		cout << "\n\tNao e um palindromo!!";
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
