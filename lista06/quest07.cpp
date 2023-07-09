#include<iostream>
#include<string>
using namespace std;

/*
Elabore um algoritmo que defina um registro capaz de armazenar as seguintes informações
sobre um determinado cliente de um banco: nome, CPF, RG, número da conta, data de
abertura da conta e saldo. Em seguida manipule um vetor com 15 registros de clientes, onde
cada registro é um elemento do tipo de dado definido. A manipulação do vetor é feita através
das seguintes opções: cadastrar cliente, imprimir os dados de um determinado cliente com
base no valor do campo CPF e imprimir todos os clientes com saldo negativo.
*/

struct banco{
	string nome;
	string cpf;
	int rg;
	int numeroConta;
	string dataAberturaC;
	float saldo;
};

const int tam=15;
int main(){
	
	banco c[tam];
	int i=0, j, op, opcao;
	string busca;	
	
	do{	
		cout << "\e[H\e[2J";
		system("cls");
		cout << "----BANCO----";
		cout << "\n\n1- Cadastrar Cliente";
		cout << "\n2- Buscar Cliente";
		cout << "\n3- Buscar Saldos Negativos";
		cout << "\n4- Sair";
		cout << "\n\nDigite a opcao que deseja: ";
		cin >> op;
		getchar();
		switch(op){
			case 1:	
				do{
					cout << "\n\nDigite o nome do cliente: ";
					getline(cin, c[i].nome);
					cout << "\nDigite o CPF do cliente: ";
					getline(cin, c[i].cpf);
					cout << "\nDigite o RG do cliente: ";
					cin >> c[i].rg;
					cout << "\nNumero da conta do cliente: ";
					cin >> c[i].numeroConta;
					cout << "\nDigite a data de abertura da conta do cliente: ";
					getchar();
					getline(cin, c[i].dataAberturaC);
					cout << "\nSaldo do cliente: ";
					cin >> c[i].saldo;
					
					cout << "\n\nDeseja cadastrar mais algum cliente? (1-sim, 0-nao) ";
					cin >> opcao;
					getchar();
					if(opcao==1){
						i++;
					}
				}while(opcao!=0 && i<tam);
			break;
			case 2: 
				cout << "\n\nDigite o CPF do cliente que deseja: ";
				getline(cin, busca);
				for(j=0; j<=i; j++){
					if(c[j].cpf==busca){
						cout << "\n\nDigite o nome do cliente: " << c[j].nome;
						cout << "\nDigite o CPF do cliente: " << c[j].cpf;
						cout << "\nDigite o RG do cliente: " << c[j].rg;
						cout << "\nNumero da conta do cliente: " << c[j].numeroConta;
						cout << "\nDigite a data de abertura da conta do cliente: " << c[j].dataAberturaC;
						cout << "\nSaldo do cliente: " << c[j].saldo;
					}
				}
			break;
			case 3: 
				for(j=0; j<=i; j++){
					if(c[j].saldo<0){
						cout << "\n\nDigite o nome do cliente: " << c[j].nome;
						cout << "\nDigite o CPF do cliente: " << c[j].cpf;
						cout << "\nDigite o RG do cliente: " << c[j].rg;
						cout << "\nNumero da conta do cliente: " << c[j].numeroConta;
						cout << "\nDigite a data de abertura da conta do cliente: " << c[j].dataAberturaC;
						cout << "\nSaldo do cliente: " << c[j].saldo;
					}
				}
			case 4: cout << "\n\nFIM DO PROGRAMA\n";  
			default: cout << "\n\nDIGITE UMA OPCAO VALIDA!!";
		}
	}while(op!=4);
	
	system("pause");
}
