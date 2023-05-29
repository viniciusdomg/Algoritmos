#include<iostream>
using namespace std;

/*
Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de sexo 
(m=masculino, f=feminino) e altura de cada pessoa. Faça um programa que leia os dados de várias 
pessoas diferentes e informe:
- A altura da mulher mais baixa; - A média de altura dos homens;
- A média de altura da população.
O algoritmo deve encerrar quando for digitado o valor “X” para altura.
*/

int main(){
	
	int homem=0, populacao=0;
	char sexo;
	float altura, medAlt=0, medHom=0, altMulher=100;

	cout << "Sera realizada uma pesquisa para saber a media da altura dos habitantes da regiao\n";
	cout << "Para sair, basta digitar 120 para altura\n";
	do{
		cout << "\nDigite seu sexo (m-masc, f-feminino): ";
		cin >> sexo;
		cout << "\nDigite sua altura: ";
		cin >> altura;		
	
		if(altura!=120){
			populacao++;
			medAlt+=altura;
	
			if(sexo=='m'){
				homem++;
				medHom+=altura;
			}
			if(sexo=='f'){
				if(altura<altMulher){
					altMulher=altura;
				}
			}
		}
		
	}while(altura!=120);
	
	if(altMulher!=100){
		cout << "\n\tAltura da mulher mais baixa da regiao: " << altMulher << " metros";
	}
	cout << "\n\tA media da altura dos homens da regiao: " << medHom/homem << " metros";
	cout << "\n\tA media da altura da populacao da regiao: " << medAlt/populacao << " metros";
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
