#include<iostream>
#include<string>
using namespace std;

/*
Crie um tipo registro chamado Endereco que contenha os campos Rua (string), Numero (int),
Bairro (string), Cidade (string), Estado (string). Em seguida declare uma variável do tipo
Endereco. Crie outro tipo registro chamado Pessoa que tenha os campos Nome (string),
Ender (Endereco), Telefone (string) e Idade (int).
- Declare um vetor pessoas com 10 posições do tipo Pessoa e leia seus dados;
- Leia um endereço na variável do tipo endereço;
- Faça uma busca e liste os nomes de todas as pessoas cadastradas no vetor cujo bairro é o
mesmo bairro do endereço cadastrado na variável do tipo endereço.
*/

struct tEndereco{
	string rua;
	int numero;
	string bairro;
	string cidade;
	string estado;
};

struct tPessoa{
	string nome;
	tEndereco ender;
	string telefone;
	int idade;
};
int main(){
	
	tPessoa pessoa[10];
	int i, cont=0, opcao;
	string buscBai;
	
	cout << "----CADASTRO DE ENDERECOS----";
	do{
		cout << "\n\nNome: ";
		getline(cin, pessoa[cont].nome);
		cout << "\nIdade: ";
		cin >> pessoa[cont].idade;
		cout << "\nEstado onde mora: ";
		getchar();
		getline(cin, pessoa[cont].ender.estado);
		cout << "\nCidade onde mora: ";
		getline(cin, pessoa[cont].ender.cidade);
		cout << "\nBairro onde mora: ";
		getline(cin, pessoa[cont].ender.bairro);
		cout << "\nRua onde mora: ";
		getline(cin, pessoa[cont].ender.rua);
		cout << "\nNumero da casa: ";
		cin >> pessoa[cont].ender.numero;
		cout << "\nTelefone para contato: ";
		getchar();
		getline(cin, pessoa[cont].telefone);
		
		cont++;
		cout << "\n\nDeseja fazer mais algum cadastro? (1-sim, 2-nao) ";
		cin >> opcao;
		getchar();
	}while(opcao!=2 && cont<10);
	
	system("cls");
	cout << "----BUSCA----";
	cout << "\n\nDigite o bairro que deseja buscar moradores: ";
	getline(cin, buscBai);
	for(i=0;i<cont;i++){
		if(buscBai==pessoa[i].ender.bairro){
			cout << "\n\nNome: " << pessoa[i].nome;
			cout << "\nIdade: " << pessoa[i].idade;
			cout << "\nBairro: " << pessoa[i].ender.bairro;
			cout << "\nEstado: " << pessoa[i].ender.estado;
			cout << "\nCidade: " << pessoa[i].ender.cidade;
			cout << "\nRua: " << pessoa[i].ender.rua;
			cout << "\nNumero da casa: " <<pessoa[i].ender.numero;
			cout << "\nTelefone para contato: " << pessoa[i].telefone;
		}
	}
	
	cout << "\n\nFIM DO PROGRAMA\n";
	system("pause");
}
