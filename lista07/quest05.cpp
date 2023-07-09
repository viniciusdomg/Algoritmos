#include<iostream>
using namespace std;

/*
Elaborar o algoritmo da calculadora utilizando funções. Implementar as seguintes opções: soma, 
subtração, multiplicação e divisão.
*/

float soma(float aux, bool flag, float conta);
float subtracao(float aux, bool flag, float conta);
float multiplicacao(float aux, bool flag, float conta);
float divisao(float aux, bool flag, float conta);

int main(){
	float aux, total=0;
	char sinal;
	bool flag = true;
	
	cout << "\t----CALCULADORA----";
	cout << "\nSinais: '+', '-', '*', '/', '=' para obter resultado\n\n";
	
	do{
		if(flag){
			cout << "numero: ";
			cin >> aux;
			cout << "\noperacao: ";
			cin >> sinal;
			if(sinal=='+'){
				total = soma(aux, flag, total);
			}else if(sinal=='-'){
				total = subtracao(aux, flag, total);
			}else if(sinal=='*'){
				total = multiplicacao(aux, flag, total);
			}else if(sinal=='/'){
				total = divisao(aux, flag, total);
			}else{
				cout << "\n\t\nPOR FAVOR, realiza uma das quatro operacoes!!";
			}
			flag = false;
		}else{
			cout << "\noperacao: ";
			cin >> sinal;
			if(sinal=='+'){
				total = soma(aux, flag, total);
			}else if(sinal=='-'){
				total = subtracao(aux, flag, total);
			}else if(sinal=='*'){
				total = multiplicacao(aux, flag, total);
			}else if(sinal=='/'){
				total = divisao(aux, flag, total);
			}else if(sinal!='='){
				cout << "\n\t\nPOR FAVOR, realiza uma das cinco operacoes!!";
			}
		}
	}while(sinal!='=');
	
	system("cls");
	cout << "\n\tRESULTADO = " << total;
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}

float soma(float aux, bool flag, float conta){
	float n1;
	cout << "\nnumero: ";
	cin >> n1;
	if(flag){
		conta = aux+n1;
	}else{
		conta += n1;
	}
	return conta; 
}

float subtracao(float aux, bool flag, float conta){
	float n1;
	cout << "\nnumero: ";
	cin >> n1;
	if(flag){
		conta = aux-n1;
	}else{
		conta -= n1;
	}
	return conta;
}

float multiplicacao(float aux, bool flag, float conta){
	float n1;
	cout << "\nnumero: ";
	cin >> n1;
	if(flag){
		conta = aux*n1;
	}else{
		conta *= n1;
	}
	return conta;
}

float divisao(float aux, bool flag, float conta){
	float n1;
	cout << "\nnumero: ";
	cin >> n1;
	if(flag){
		conta = aux/n1;
	}else{
		conta /= n1;
	}
	return conta;
}
