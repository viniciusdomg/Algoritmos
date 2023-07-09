#include<iostream>
#include<string>
using namespace std;

/*
Um provedor de acesso à Internet mantém o seguinte cadastro de clientes: código do cliente,
e-mail, número de horas de acesso, página (‘S’-sim ou ‘N’-não). Elaborar um algoritmo que
insira um conjunto de registros (máximo 500), calcule e mostre um relatório contendo o valor
a pagar por cada cliente, sabendo-se que as primeiras 20 horas de acesso custam R$ 35,00 e
as horas que excederam tem o custo de R$ 2,50 por hora. Para os clientes que têm página,
adicionar R$ 40,00.
*/

struct tProvedor{
	int codigo;
	string email;
	int horas;
	char pagina;
};

int main(){
	
	tProvedor cliente[500];
	int cont=0, i, opcao;
	
	cout << "----CADASTRO DE CLIENTES----";
	do{
		cout << "\n\nDigite o codigo do cliente: ";
		cin >> cliente[cont].codigo;
		cout << "\nDigite o email do cliente: ";
		getchar();
		getline(cin, cliente[cont].email);	
		cout << "\nQuantidade de horas de acesso a internet: ";
		cin >> cliente[cont].horas;
		cout << "\nCliente tem pagina? (S-sim, N-nao) ";
		cin >>	cliente[cont].pagina;
		
		cont++;
		cout << "\n\nDeseja cadastrar mais algum cliente? (1-sim, 2-nao) ";
		cin >> opcao;  
	}while(opcao!=2 && cont<500);
	
	system("cls");
	cout << "----RELATORIO----";
	for(i=0; i<cont; i++){
		cout << "\n\nCodigo do cliente: " << cliente[i].codigo;
		cout << "\nEmail do cliente: " << cliente[i].email;
		if(cliente[i].horas>20 && cliente[i].pagina=='S'){
			cout << "\nValor a ser pago pelo uso: " << ((cliente[i].horas-20)*2.50)+35+40 << "R$";
		}else if(cliente[i].horas>20){
			cout << "\nValor a ser pago pelo uso: " << ((cliente[i].horas-20)*2.50)+35 << "R$";
		}else if(cliente[i].pagina=='S'){
			cout << "\nValor a ser pago pelo: 75R$";
		}else{
			cout << "\nValor a ser pago pelo: 35R$";
		}
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
