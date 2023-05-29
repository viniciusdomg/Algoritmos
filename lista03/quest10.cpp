#include<iostream>
using namespace std;

/*
Faça um algoritmo que leia um conjunto de 4 valores, um de cada vez, e, após lidos os valores, escreva
uma tabela de resultados (formatada com linhas verticais e horizontais). A tabela deverá conter cada
valor lido em uma coluna, seu quadrado (na segunda linha) e seu cubo (na terceira linha). Finalizar a
entrada de dados quando os 4 valores digitados forem iguais a zero. Se for digitado algum número
negativo, solicitar que o usuário digite novamente até que o número seja positivo.
*/

int main(){
	
	int num, cont, arm1, arm2, arm3, arm4;
	
	cout << "Digite os 4 Elementos do conjunto (nao pode ser negativo): ";
	
	for(cont=1; cont<5; cont++){	
		cin >> num;
		switch(cont){
			case 1: arm1 = num;
				break;
			case 2: arm2 = num;
				break;
			case 3: arm3 = num;
				break;
			case 4: arm4 = num;
				break; 
		}
	}
	cout << "\n\n\tTabela dos Conjuntos\n";
	cout << "\n\t-----------------\n";
	cout << "\t|" << arm1<< " | " << arm2 << " | " << arm3 << " | " << arm4 << " | ";
	cout << "\n\t-----------------\n";
	cout << "\t|" << arm1*arm1 << "| " << arm2*arm2 << "| " << arm3*arm3 << "| " << arm4*arm4 << "| ";
	cout << "\n\t-----------------\n";
	cout << "\t|" << arm1*arm1*arm1 << "|" << arm2*arm2*arm2 << "|" << arm3*arm3*arm3 << "|" << arm4*arm4*arm4 << "|";
	cout << "\n\t-----------------";
	
	cout << "\n\n\nFIM DO PROGRAMA\n\n";
	system("pause");
	
}
