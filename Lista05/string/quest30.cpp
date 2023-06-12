#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

/*
Elabore um algoritmo que leia uma strings S1, sorteie aleatoriamente um ponto P (n�mero aleat�rio 
rand�mico) e escreva uma string S2 resultante do processo de muta��o. Dica: utilize a gera��o de 
n�meros rand�micos para �sortear� a posi��o (�ndice) da string que sofrer� modifica��o (ponto P) e 
elabore uma maneira de escolher aleatoriamente o conte�do de outro �ndice da string que ser� o novo 
valor daquela posi��o P.
*/

int main(){
	
	//Para corrigar o problema do nullptr no dev --> 
	srand(time(nullptr));//Ferramentos - Opcoes do compilador - Configuracoes - Geracao de Codigo - Padrao da linguagem - ISO C++ 11
	
	string s1, s2;
	char troca;
	int i, p = rand()%7;	

	cout << "Um DNA sao compostos por 8 bases nitrogenadas, por favor digite as 8!!\n\n";
	do{
		cout << "Digite o primeiro DNA: ";
		getline(cin, s1);
	}while(s1.length()!=8);
	
	s2 = s1;
	troca = s1[p];
	p = rand()%7; 
	s2[p] = troca;
	
	cout << "\n\nDNA sem mutacao: " << s1;
	cout << "\n\nDNA mutado: " << s2;
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
