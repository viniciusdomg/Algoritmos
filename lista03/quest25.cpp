#include<iostream>
using namespace std;

/*
Elabore um algoritmo que leia o gabarito correto de uma prova com 10 questões e os gabaritos de 
respostas de N alunos de uma turma. Calcule e mostre o número de erros e acertos de cada aluno e 
a média de acertos da turma. Considere como respostas possíveis para cada questão as alternativas
‘a’, ‘b’,‘c’ e ‘d’.
*/

int main(){
	
	int cont, acert=0, media=0, alunos, i;
	char q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, resp;
	
	cout << "\nDigite o gabarito da 1a questao: ";
	cin >> q1;
	cout << "\nDigite o gabarito da 2a questao: ";
	cin >> q2;
	cout << "\nDigite o gabarito da 3a questao: ";
	cin >> q3;
	cout << "\nDigite o gabarito da 4a questao: ";
	cin >> q4;
	cout << "\nDigite o gabarito da 5a questao: ";
	cin >> q5;
	cout << "\nDigite o gabarito da 6a questao: ";
	cin >> q6;
	cout << "\nDigite o gabarito da 7a questao: ";
	cin >> q7;
	cout << "\nDigite o gabarito da 8a questao: ";
	cin >> q8;
	cout << "\nDigite o gabarito da 9a questao: ";
	cin >> q9;
	cout << "\nDigite o gabarito da 10a questao: ";
	cin >> q10;

	cout << "\n\nQuantos alunos fizeram a prova? ";
	cin >> alunos;
	
	for(i=0; i<alunos; i++){
		cout << "\nCorrecao da prova do " << i+1 << " aluno";
		for(cont=1; cont<=10; cont++){
			cout << "\nDigite a resposta da " << cont << "a questao: ";
			cin >> resp;
			switch(cont){
				case 1: if(resp==q1){
							acert++;
						}
					break;
				case 2: if(resp==q2){
							acert++;
						}
					break;
				case 3: if(resp==q3){
							acert++;
						}
					break;
				case 4: if(resp==q4){
							acert++;
						}
					break;
				case 5: if(resp==q5){
							acert++;
						}
					break;
				case 6: if(resp==q6){
							acert++;
						}
					break;
				case 7: if(resp==q7){
							acert++;
						}
					break;
				case 8: if(resp==q8){
							acert++;
						}
					break;
				case 9: if(resp==q9){
							acert++;
						}
					break;
				case 10: if(resp==q10){
							acert++;
						}
					break;
			}
		}
		cout << "\n\n\tEste aluno acertou " << acert << " questoes!";
		cout << "\n\tEste aluno errou " << 10-acert << " questoes!\n";
		media+=acert;
		acert=0;
	}
	
	cout << "\n\n\tA media de acertos da turma foi " << media/alunos << " questoes";
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
	
}
