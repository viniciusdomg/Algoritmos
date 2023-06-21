#include<iostream>
#include<string>
using namespace std;

/*
Altere o exercício anterior para que, após o término de todos os cadastros, ou seja, quando o usuário 
digitar "N" na pergunta para novo cliente ou quando preencher o vetor com 20 clientes, a tela seja ser
limpa e seja exibida uma nova tela perguntando se o usuário quer ver um relatório ou consultar um 
cliente individualmente. Se ele desejar ver o relatório, o sistema deverá exibi-lo conforme questão 
anterior. Se ele escolher consultar um cliente individualmente, o sistema deverá solicitar a identidade 
do cliente procurado, fazer uma busca no vetor e informar seus dados caso o cliente esteja 
cadastrado. Se não existir cliente cadastrado com aquela identidade, o sistema deverá informar 
“Cliente não cadastrado”.
*/

struct cliente{
	int identidade;
	string nome;
	string endereco;
	string telefone;
};
int main(){
	
	cliente c[20];
	int i=0, j, op, auxId;
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
	
	do{
		cout << "\e[H\e[2J";
		cout << "---CONSULTA---";
		cout << "\n\n1- Relatorio de todos";
		cout << "\n2- Cliente individual";
		cout << "\n3- Nao desejo consultar";
		cout << "\n\nDigite sua opcao: ";
		cin >> op;
		cout << "\n\n";
		switch(op){
			case 1:	cout << "-----RELATORIO-----";
					for(j=0; j<=i; j++){
						cout << "\n\nNome: " << c[j].nome;
						cout << "\nIdentidade: " << c[j].identidade;
						cout << "\nTelefone: " << c[j].telefone;
						cout << "\nEndereco: " << c[j].endereco;
					}
				break;
			case 2: cout << "Digite a identidade do cliente que deseja buscar: ";
					cin >> auxId;
					for(j=0; j<=i; j++){
						if(c[j].identidade==auxId){
							cout << "\n\n-----CLIENTE-----";
							cout << "\n\nNome: " << c[j].nome;
							cout << "\nIdentidade: " << c[j].identidade;
							cout << "\nTelefone: " << c[j].telefone;
							cout << "\nEndereco: " << c[j].endereco;
						}
					}
				break;
			case 3: cout << "\n\nFIM DO PROGRAMA\n";
			break;
			default: cout << "\n\nDIGITE UMA OPCAO VALIDA!!";
		}
	}while(op!=3);
	system("pause");
}
