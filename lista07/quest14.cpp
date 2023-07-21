#include<iostream>
#include<string>
using namespace std;

/*
Escreva uma função que receba uma string e uma letra e retorne um vetor de inteiros contendo as posições 
(índices no vetor da string) onde a letra foi encontrada e um inteiro contendo o tamanho do vetor criado 
(total de letras iguais encontradas). Utilize o retorno de um vetor para retornar os índices e um ponteiro
para guardar o tamanho do vetor. Elabore um algoritmo que teste a função supracitada.
*/
int* Letras(string str, char letra, int *tamanho);
int main(){
	
	string str;
	char letra;
	int i, t;
	t=0;
	
	cout << "Digite uma frase: ";
	getline(cin,str);
	cout << "\nDigite uma letra para buscar dentro da frase: ";
	cin >> letra;
	
	int *inteiros; 
	inteiros = Letras(str, letra, &t);
	cout << "\n\nAs posicoes que tem letra igual a '" << letra << "' sao: ";
	for(i=0;i<t;i++){
		cout << inteiros[i] << " ";
	}
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

int* Letras(string str, char letra, int *tamanho){
	int i, *ponteiro, j=0;
	for(i=0;i<str.length();i++){
		if(str[i]==letra || str[i]-32==letra || str[i]+32==letra){
			*tamanho += 1;
		}
	}
	int* vetor = new int[*tamanho];
	for(i=0;i<str.length();i++){
		if(str[i]==letra || str[i]-32==letra || str[i]+32==letra){
			vetor[j] = i;
			j++;
		}
	}
	ponteiro = vetor;
	return ponteiro;
}
