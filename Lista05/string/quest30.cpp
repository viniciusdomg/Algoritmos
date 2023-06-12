#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;

/*
Elabore um algoritmo que leia uma strings S1, sorteie aleatoriamente um ponto P (número aleatório 
randômico) e escreva uma string S2 resultante do processo de mutação. Dica: utilize a geração de 
números randômicos para “sortear” a posição (índice) da string que sofrerá modificação (ponto P) e 
elabore uma maneira de escolher aleatoriamente o conteúdo de outro índice da string que será o novo 
valor daquela posição P.
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
