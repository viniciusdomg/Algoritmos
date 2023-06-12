#include<iostream>
#include<string>
using namespace std;

/*
O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de 
substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto 
abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria 
substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Elabore um algoritmo que utilize o 
Código de César (n posições, sendo n informado pelo usuário), entre com uma string e escreva a 
string codificada.
Exemplo: para n=3, a string “a ligeira raposa marrom saltou sobre o cachorro cansado” seria 
codificada para “D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR”.
*/

int main(){
	
	string texto, aux;
	int posicao, i;
	
	cout << "O codigo funciona com letras maiusculas e minusculas\n\n";
	cout << "Digite o texto que deseja: ";
	getline(cin, texto);
	
	cout << "\nDigite a quantidade de trocas de posicao que o Codigo de Cesar se baseara: ";
	cin >> posicao;
	
	for(i=0; i<texto.length(); i++){
		if(texto[i]==' '){
			aux += ' ';
		}else{
			if(texto[i]<97){
				aux += texto[i]+posicao;	
			}else{
				aux += texto[i]-(32-posicao);	
			}
		}
	}
	
	cout << "\n\n\tCodigo de Cesar:  " << aux;
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
