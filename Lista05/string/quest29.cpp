#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

/*
Elabore um algoritmo que leia duas strings S1 e S2, sorteie aleatoriamente um ponto P (número 
aleatório randômico) e escreva as duas strings S3 e S4 resultantes do processo de recombinação. 
Dica: pesquise por geração de números randômicos.
*/

int main(){
	
	//Para corrigar o problema do nullptr no dev --> 
	srand(time(nullptr));//Ferramentos - Opcoes do compilador - Configuracoes - Geracao de Codigo - Padrao da linguagem - ISO C++ 11
	
	string s1, s2, s3, s4;
	int i, p = rand()%7;
	
	cout << "Um DNA sao compostos por 8 bases nitrogenadas, por favor digite as 8!!\n\n";
	do{
		cout << "Digite o primeiro DNA: ";
		getline(cin, s1);
	}while(s1.length()!=8);
	
	do{
		cout << "Digite o segundo DNA: ";
		getline(cin, s2);
	}while(s2.length()>!=8);

	s3 = s1;
	s4 = s2;
	for(i=p; i<s1.length();i++){
		s3[i] = s2[i];
		s4[i] = s1[i]; 
	}
	
	cout << "\n\nDNA antes da recombinacao: \n" << s1 << "\n" << s2;
	cout << "\n\nDNA recombinado: \n" << s3 << "\n" << s4;

	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
