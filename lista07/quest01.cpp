#include<iostream>

using namespace std;

/*Numa disciplina são dadas duas provas e dois trabalhos, mas a média é calculada considerando-se apenas
a maior nota de prova e a maior nota de trabalho. Elabore um algoritmo que, dadas as quatro notas de um 
aluno, informe a sua média. Para isso, utilize duas funções: uma que determine o maior valor entre as 
notas (de provas ou de trabalhos) e outra que calcule a média aritmética das duas maiores notas.*/

float notasM();
float notasT();

int main(){

	float notaP, notaT, maiorP = 0 , maiorT =0 ;
	int i;
	
	for(i=0; i<2; i++){
		system("cls");
		notaP = notasM();
		notaT = notasT();
		if(maiorP<notaP){
			maiorP = notaP;
		}
		if(maiorT<notaT){
			maiorT = notaT;
		}
	}
	
	cout << "\n\tMEDIA DO ALUNO: " << (maiorP+maiorT)/2;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

float notasM (){
	
	float prova;
	cout << "Digite a nota da prova: ";
	cin >> prova;
	
	return prova;
}

float notasT(){
	
	float trab;
	cout << "Digite a nota do trabalho: ";
	cin >> trab;
	
	return trab;
}
