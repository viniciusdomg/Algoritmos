#include<iostream>
#include<string>
using namespace std;

/*
Altere o exercício anterior para cadastrar no máximo 20 clientes. Ao final do cadastro de cada 
cliente deverá ser perguntado: "Novo Cliente (S/N)?". Caso o usuário escolha “N” ou chegar nos 
20 clientes, o programa deve mostrar um relatório de todos os clientes cadastrados e finalizar. 
OBS: Deve-se utilizar um vetor de registros na solução.
*/

struct cliente{
	int identidade;
	string nome;
	string telefone;
	string endereco;
};

int main(){

	cliente c[20];
	int i=0, j;
	char opcao;
	
	cout << "-----CADASTRO-----";
	do{
		cout << "\n\nNome do cliente: ";
		getline(cin, c[i].nome);
		cout << "\nIdentidade do cliente: ";
		cin >> c[i].identidade;
		cout << "\nTelefone do cliente: ";
		getchar();
		getline(cin, c[i].telefone);
		cout << "\nEndereco do cliente: ";
		getline(cin, c[i].endereco);
	
		cout << "\n\nDejesa cadastrar mais algum cliente? (S-sim, N-nao) ";
		cin >> opcao;
		getchar();
		if(opcao=='S'){
			i++;
		}
	}while(opcao!='N' && i<20);
	
	cout << "\n\n-----CLIENTE-----";
	for(j=0; j<=i; j++){
		cout << "\n\nNome do cliente: " << c[i].nome;
		cout << "\nIdentidade do cliente: " << c[i].identidade;
		cout << "\nTelefone do cliente: " << c[i].telefone;
		cout << "\nEndereco do cliente: " << c[i].endereco;
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
