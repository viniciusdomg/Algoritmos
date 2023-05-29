#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia dez conjuntos de dois valores, o primeiro representando a idade do 
aluno e o segundo representando a sua altura em metros, e armazene-os em dois vetores (Idade de 
Altura). Verifique e escreva a idade do aluno mais alto, a idade do aluno mais baixo e a média 
das alturas dos alunos maiores de idade.
*/

const int tam=3;
int main(){
	
	int idade[tam], i, idM, idm, j=0;
	float altura[tam], media, menor, maior;
	
	for(i=0; i<tam; i++){
		cout << "Digite a idade do " << i+1 << "o aluno: ";
		cin >> idade[i];
		cout << "\nDigite a altura desse aluno: ";
		cin >> altura[i];
		cout << "\n";
		
		if(idade[i]>=18){
			media += altura[i];
			j++;
		}
	}
	
	menor=altura[0];
	maior =altura[0];
	for(i=0; i<tam; i++){
		if(altura[i]<menor){
			menor =altura[i];
			idm = idade[i];
		}
		if(altura[i]>maior){
			maior =altura[i];
			idM = idade[i];
		}
	}
	
	cout << "\n\nIdade do aluno mais alto: " << idM <<" anos";
	cout << "\nIdade do aluno mais baixo: " << idm << " anos";
	cout << "\nMedia da altura dos alunos maiores de idade: " << media/j << "m\n\n";
	
	system("pause");
}
