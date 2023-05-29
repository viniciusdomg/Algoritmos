#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia 20 números inteiros obrigatoriamente diferentes e armazene-os em 
um vetor. Cada vez que o número digitado já existir no vetor, o algoritmo deverá computar mais 
um erro. Ao final escreva o vetor e o total de erros que o usuário cometeu.
*/

const int tam=10;
int main(){
	
	int n[tam], i, j, erroC=0;
	bool erro;
	
	for(i=0; i<tam; i++){
		do{
			erro = true;
			cout << "Digite o "<< i+1 << "o elemento do vetor, sendo ele diferente: ";
			cin >> n[i];
			for(j=0; j<i; j++){
				if(n[j]==n[i]){
					erro = false;
					erroC++;
				}
			}
		}while(!erro);
	}
	
	cout << "\nElementos: ";
	for(i=0; i<tam; i++){
		cout << n[i] << " ";
	}
	cout << "\nQuqntidade de erros de numeros repetidos digitados: " << erroC << "\n\n";
	system("pause"); 
}
