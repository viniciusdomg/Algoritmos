#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia dois vetores de mesmo tamanho M e N, sendo M contendo as matrículas 
dos alunos (inteiros) e N suas respectivas notas (o tamanho deve ser digitado pelo usuário). 
Calcule a média de todas as notas de N. Escreva primeiramente o conjunto das notas maiores do que
a média calculada. Em seguida, escreva as matrículas dos alunos cujas notas foram menores do que 
a média.
*/

int main(){
	
	int alu, mat, i, j, k=0;
	cout << "Quantos alunos tem esse ano? ";
	cin >> alu;
	int m[alu];
	
	cout << "\nQuantas materias eles possuem: ";
	cin >> mat;
	float n[alu*mat], media=0;
	
	for(i=0; i<alu; i++){
		cout << "\nDigite a matricula do " << i+1 << "o aluno: ";
		cin >> m[i];
		for(j=0; j<mat; j++){
			cout << "\nSua " << j+1 << "a nota: ";
			cin >> n[k];
			media += n[k];
			k++;
		}
	}
	
	media = media/(alu*mat);
	cout << "\nA media foi " << media << "\n";
	cout << "\nAs maiores notas que as medias calculadas foram: \n\n\t";
	for(j=0; j<k; j++){
		if(n[j]>media){
			cout << n[j] << "\n\t";
		}
	}
	
	cout << "\nMatriculas dos alunos com notas menores que a media: \n\n\t";
	k=0;
	for(i=0; i<alu; i++){
		for(j=0; j<mat; j++){
			if(n[k]<media){
				cout << m[i] << "\n\t";
			}
			k++;
		}
	}
	
	cout << "\n\n\nFIM DO PROGRAMA\n";
	system("pause");
	
}
